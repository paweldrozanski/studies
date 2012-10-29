/*
 * *  hello.c (initscr)
 * */

#include <stdlib.h>   /* exit() */
#include <unistd.h>   /* sleep() */
#include <curses.h>

int main(void) 
{
  int xmax, ymax;

  if (initscr() == NULL) {
    fprintf(stderr,"Error: initscr()\n");
    exit(1);
  }
  getmaxyx(stdscr,ymax,xmax);
  printw("Hello!\n");
  printw("Liczba wierszy okna = %d\n",ymax);
  printw("Liczba kolumn okna = %d\n",xmax);
  refresh();
  sleep(2);
  endwin();
  return 0;
}
