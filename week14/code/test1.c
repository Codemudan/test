#include"my.h"
#define NUM 4

void fun(void *arg)
{
	int *pt;
	int sum=0;
	pt = (int *)arg;
	for(int temp=(int)pt * 100;temp < (int)pt*100 + 100;temp++)
	{	printf("%d\t",temp);
		sum+=temp;
	}//pt = (int *)arg;
	printf("worker thread %d:tid = %p,sum=%d\n",(int)pt,pthread_self(),sum);
}

int main()
{
	pthread_t tid[NUM];
	int ret;
	int i;
	for(i=0;i<NUM;i++)
		pthread_create(&tid[i],NULL,(void*(*))fun,(void*)i);
	for(i=0;i<NUM;i++)
		pthread_join(tid[i],NULL);
	printf("ALL finished!\n");
	return 0;
}
