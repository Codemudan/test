#include"my.h"
#define NUM_THREADS 8
char* messages[NUM_THREADS];
struct thread_data{
	int thread_id;
	int sum;
	char*message;
};
struct thread_data thread_data_array[NUM_THREADS];
void* PrintHello(void *threadarg)
{
	int taskid,sum;
	char *hello_msg;
	struct thread_data* my_data;
	sleep(1);
	my_data = (struct thread_data*)threadarg;
	taskid = my_data->thread_id;
	sum = my_data->sum;
	hello_msg = my_data->message;
	printf("thread %d : %s   Sum = %d\n",taskid,hello_msg,sum);
	pthread_exit(NULL);
}

int main()
{
	pthread_t threads[NUM_THREADS];
	int* taskid[NUM_THREADS];
	int r0,t,sum;
	sum=0;
	messages[0]="English: Hello World";
	messages[1]="English: Hello World";
	messages[2]="English: Hello World";
	messages[3]="English: Hello World";
	messages[4]="English: Hello World";
	messages[5]="English: Hello World";
	messages[6]="English: Hello World";
	messages[7]="English: Hello World";
	for(t=0;t<NUM_THREADS;t++)
	{
		sum = sum+t;
		thread_data_array[t].thread_id=t;
		thread_data_array[t].sum = sum;
		thread_data_array[t].message = messages[t];
		printf("Creating thread %d\n",t);
		r0 = pthread_create(&threads[t],NULL,PrintHello,(void*)&thread_data_array[t]);
		if(r0)
		{
			printf("ERROR:return code f is %d\n",r0);
			exit(-1);
		}
	}
	pthread_exit(NULL);

}









