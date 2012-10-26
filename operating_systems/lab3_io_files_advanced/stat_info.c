#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <pwd.h>
#include <grp.h>
#include <unistd.h>
#include <aio.h>
#include <errno.h>

#define FREQ   400 
/* -------------------------------------------------------------------------------- */

static void print_type(struct stat *sb);
static void print_ino(const struct stat *sb);
static void print_perms(const struct stat *sb, const char* path);
static void print_linkc(const struct stat *sb);
static void print_owner(const struct stat *sb);
static void print_size(const struct stat *sb);
static void print_laststch(const struct stat *sb);
static void print_lastacc(const struct stat *sb);
static void print_lastmod(const struct stat *sb);
static void print_name(const struct stat *sb, char *name);
static void print_content(char *name);

/* -------------------------------------------------------------------------------- */

int  main(int argc, char *argv[])
{
  struct stat sb;
  
  if (argc != 2) {
    fprintf(stderr, "Usage: %s <pathname>\n", argv[0]);
    exit(EXIT_FAILURE);
  }
  
  if (lstat(argv[1], &sb) == -1) {
    perror("stat");
    exit(EXIT_SUCCESS);
  }
  
  print_type(&sb);
  print_name(&sb, argv[1]);
  print_ino(&sb);
  print_perms(&sb, argv[1]);
  print_linkc(&sb);
  print_owner(&sb);
  print_size(&sb);
  print_laststch(&sb);
  print_lastacc(&sb);
  print_lastmod(&sb);
  print_content(argv[1]);
  
  exit(EXIT_SUCCESS);
}
/* -------------------------------------------------------------------------------- */

static void print_type(struct stat *sb){
  printf("File type:                ");
  switch (sb->st_mode & S_IFMT) {
  case S_IFLNK:  printf("symlink\n");                 break;
  case S_IFBLK:  printf("block device\n");            break;
  case S_IFCHR:  printf("character device\n");        break;
  case S_IFDIR:  printf("directory\n");               break;
  case S_IFIFO:  printf("FIFO/pipe\n");               break;
  case S_IFREG:  printf("regular file\n");            break;
  case S_IFSOCK: printf("socket\n");                  break;
  default:       printf("unknown?\n");                break;
  }
}
/* -------------------------------------------------------------------------------- */

static void print_ino(const struct stat *sb){
  printf("I-node number:            %ld\n", (long) sb->st_ino);
}
/* -------------------------------------------------------------------------------- */

static void print_perms(const struct stat *sb, const char *path){
  char* read = malloc(3*sizeof(char));
  char* write= malloc(3*sizeof(char));
  char* execute= malloc(3*sizeof(char));

  printf("Mode:                     %lo \n", (unsigned long) sb->st_mode & 0700);
  printf("Mask:                     %lo \n", (unsigned long) sb->st_mode & S_IRWXU);

  read = access(path, R_OK) == 0 ? "yes" : "no";
  write = access(path, W_OK) == 0 ? "yes" : "no";
  execute = access(path, X_OK) == 0 ? "yes" : "no";
  printf("Your permissions: read: %s, write: %s, execute: %s\n", read, write, execute);

}
/* -------------------------------------------------------------------------------- */

static void print_linkc(const struct stat *sb){
  printf("Link count:               %ld\n", (long) sb->st_nlink);
}
/* -------------------------------------------------------------------------------- */

static void print_owner(const struct stat *sb){
  printf("Ownership:                %s(%ld) %s(%ld)\n", getpwuid(sb->st_uid)->pw_name, (long) sb->st_uid,
                                                        getgrgid(sb->st_gid)->gr_name, (long) sb->st_gid);
}
/* -------------------------------------------------------------------------------- */
void check_and_print_size(long point){

  if (point <1024) printf("%ld B\n",point); 
  else if (point < 1024*1024) printf("%ld KB\n", point/(1024));
  else if (point < 1024*1024*1024) printf("%ld MB\n", point/(1024*1024));
  else printf("way more than %ld BrontoBytes\n", point/(1024*1024*1024));
}

static void print_size(const struct stat *sb){
  

  printf("Preferred I/O block size:\t"); check_and_print_size((long)sb->st_blksize);

  /*
  if ((long)sb->st_blksize <1024) printf("%ld B\n", (long) sb->st_blksize);
  else if ((long)sb->st_blksize < 1024*1024) printf("%ld KB\n", (long) sb->st_blksize/(1024));
  else if ((long)sb->st_blksize < 1024*1024*1024) printf("%ld MB\n", (long) sb->st_blksize/(1024));
  else printf("%ld BrontoBytes\n", (long)sb->st_blksize/(1024*1024*1024));
  */
    /*printf("File size:                %lld bytes\n",(long long) sb->st_size);*/
  printf("File size:\t"); check_and_print_size((long long) sb->st_size);
  printf("Blocks allocated:         %lld\n",(long long) sb->st_blocks);
}
/* -------------------------------------------------------------------------------- */

static void diff_time(time_t some_time){

  time_t now;
  time(&now);
  int dif = difftime(now, some_time);
  if (dif < 60) printf("%ds ago\n", dif);
  else if (dif < 60*60) printf("%dmin and %ds ago\n", dif/60, dif %60);
  else if (dif < 60*60*60) printf("%dh %dm and %ds ago\n", dif/3600, (dif%3600)/60, dif%(3600*60));
  else printf("%d\n", dif);
}

static void print_laststch(const struct stat *sb){
  printf("\nLast status change:       %s", ctime(&sb->st_ctime));
  printf("Last status change: %dyear %dhours %dminutes %dseconds ago.\n", gmtime(&sb->st_ctime)->tm_year, gmtime(&sb->st_ctime)->tm_hour, 
      gmtime(&sb->st_ctime)->tm_min, gmtime(&sb->st_ctime)->tm_sec);
  printf("Last status change: ");
  diff_time(sb->st_ctime);
  printf("\n");
}
/* -------------------------------------------------------------------------------- */

static void print_lastacc(const struct stat *sb){
  printf("Last file access:         %s", ctime(&sb->st_atime));
  printf("Last file access: %dhours %dminutes %dseconds ago.\n", gmtime(&sb->st_atime)->tm_hour, 
      gmtime(&sb->st_atime)->tm_min, gmtime(&sb->st_atime)->tm_sec);
  printf("Last file access: ");
  diff_time(sb->st_atime);
  printf("\n");
}
/* -------------------------------------------------------------------------------- */

static void print_lastmod(const struct stat *sb){
  printf("Last file modification:   %s", ctime(&sb->st_mtime));
  printf("Last file modification: %dhours %dminutes %dseconds ago.\n", gmtime(&sb->st_mtime)->tm_hour, 
      gmtime(&sb->st_mtime)->tm_min, gmtime(&sb->st_mtime)->tm_sec);
  printf("Last file modification: ");
  diff_time(sb->st_mtime);
  printf("\n");
}
/* -------------------------------------------------------------------------------- */

static void print_name(const struct stat *sb, char *name){

  char* bname = basename(name);
  printf("Name of the file:         %s\n", bname);

  if ((sb->st_mode & S_IFMT) == S_IFLNK) {
    char *linkname;
    ssize_t r;
    linkname = malloc(sb->st_size + 1);
    r = readlink(name, linkname, sb->st_size + 1);
    linkname[sb->st_size] = '\0';
    printf("'%s' points to '%s'\n", name, linkname);
  }

}
/* -------------------------------------------------------------------------------- */
static void print_content(char *name){

  const int SIZE_TO_READ = 10;
  int fd;
  char* buffer = malloc(SIZE_TO_READ* ( sizeof(char)));

  if ((fd = open(name, O_RDONLY)) == -1){
    perror("can't open the file...");
  }

  struct aiocb cb;
  
  memset(&cb, 0, sizeof(struct aiocb));
  cb.aio_nbytes = SIZE_TO_READ;
  cb.aio_fildes = fd;
  cb.aio_offset = 0;
  cb.aio_buf = buffer;
  
  // read!
  if (aio_read(&cb) == -1)
  {
    printf("Unable to create requests!\n");
    close(fd);
    return;
  }
  printf("Request enqueued!\n");
  while(aio_error(&cb) == EINPROGRESS)
  {
    printf("Working...\n");
  }
  // success?
  int numBytes = aio_return(&cb);

  if (numBytes != -1)
    printf("Success!\n");
  else
    printf("Error!\n");

  free(buffer);
  close(fd);
}
