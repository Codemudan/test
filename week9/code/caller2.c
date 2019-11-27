#include "my.h"
int main()
{
   char *vect[]={"./test1","123","hello","World",NULL};
   printf("caller3 pid = %d ,ppid = %d\n",getpid(),getppid());
   execv("/home/rlk/week7/test1",vect);
   //execl("/home/rlk/week7/test1","./test1","123","hello","World",NULL);
   printf("execl after calling!\n");
   return 0;

}
