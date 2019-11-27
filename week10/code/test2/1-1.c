#include "my.h"

int g=10;
int main()
{
int s=20;
static int k=30;
pid_t pid;
pid=vfork();
if(pid<0)
{
perror("failed vfork!\n");
exit(-1);
}
else
