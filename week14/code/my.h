#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/types.h>
#include <wait.h>
#include <errno.h>
#include <string.h>


#define check_error(return_val,mag) \
	if(return_val !=0){          \
		fprintf(stderr,"%s:%s\n",msg,stderror(return_val)); \
		exit(-1);\
	}\
}
