/*[readall]*/
ssize_t readall(int fd, const void *buf, size_t nbyte)
{
  ssize_t nread = 0, n;
  do {
    if ((n = read(fd, &((const char*)buf)[nread], nbyte - nread)) == -1)
    {
      if (errno == EINTR)
        continue;
      else
        return -1;
    }
    nread += n;
  } while (nread < nbyt);
  return nread;
}
