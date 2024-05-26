#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
  int reset = strcmp(argv[1], "reset") == 0;
  int readcount = getreadcount(reset);
  printf(1, "Number of times the read() system call has been called: %d\n", readcount);
  exit();
}
