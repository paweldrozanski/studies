#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <pwd.h>
#include <grp.h>
#include <unistd.h>
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
/* -------------------------------------------------------------------------------- */

int  main(int argc, char *argv[])
{
  struct stat sb;
  
  if (argc != 2) {
    fprintf(stderr, "Usage: %s <pathname>\n", argv[0]);
    exit(EXIT_FAILURE);
  }
  
  if (stat(argv[1], &sb) == -1) {
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
  
  exit(EXIT_SUCCESS);
}
/* -------------------------------------------------------------------------------- */

static void print_type(struct stat *sb){
  printf("File type:                ");
  switch (sb->st_mode & S_IFMT) {
  case S_IFBLK:  printf("block device\n");            break;
  case S_IFCHR:  printf("character device\n");        break;
  case S_IFDIR:  printf("directory\n");               break;
  case S_IFIFO:  printf("FIFO/pipe\n");               break;
  case S_IFLNK:  printf("symlink\n");                 break;
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
  

  printf("Preferred I/O block size:\t"); 
  /*
  if ((long)sb->st_blksize <1024) printf("%ld B\n", (long) sb->st_blksize);
  else if ((long)sb->st_blksize < 1024*1024) printf("%ld KB\n", (long) sb->st_blksize/(1024));
  else if ((long)sb->st_blksize < 1024*1024*1024) printf("%ld MB\n", (long) sb->st_blksize/(1024));
  else printf("%ld BrontoBytes\n", (long)sb->st_blksize/(1024*1024*1024));
  */
  check_and_print_size((long)sb->st_blksize);
  /*printf("File size:                %lld bytes\n",(long long) sb->st_size);*/
  printf("File size:\t"); check_and_print_size((long long) sb->st_size);
  printf("Blocks allocated:         %lld\n",(long long) sb->st_blocks);
}
/* -------------------------------------------------------------------------------- */

static void print_laststch(const struct stat *sb){
  printf("Last status change:       %s", ctime(&sb->st_ctime));
}
/* -------------------------------------------------------------------------------- */

static void print_lastacc(const struct stat *sb){
  printf("Last file access:         %s", ctime(&sb->st_atime));
}
/* -------------------------------------------------------------------------------- */

static void print_lastmod(const struct stat *sb){
  printf("Last file modification:   %s", ctime(&sb->st_mtime));
}
/* -------------------------------------------------------------------------------- */

static void print_name(const struct stat *sb, char *name){
  char* bname = basename(name);
  printf("Name of the file:         %s\n", bname);
}
/* -------------------------------------------------------------------------------- */
