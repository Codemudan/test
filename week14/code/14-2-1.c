#include"my.h"
#define NUM 4

void *fun(void *arg)
{
	int *pt;
	pt = (int*)arg;
	printf("pid = %d :worker thread is running \n",getpid());

}
