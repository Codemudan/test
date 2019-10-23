#include <unistd.h>
#include <iostream>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
using namespace std;
int main(){
	int fd;
	FILE *fp;
	char *s=(char*)"hello,world\n";
	if((fd=open("test1.txt",0_WRONLY|0_CREAT,S_IRUSR|S_IWUSR))==-1){
		cout<<"error open file"<<endl;
		return -1;
	}
	if((fd=fopen("test2.txt","w+"))==NULL){
		cout<<"error open file"<<endl;
		return -1;
	}
	count<<"file has been opened"<<endl;
	sleep(15);
	if(write(fd,s,strlen(s))<strlen(s)){
		cout<<"write error"<<endl;
		return -1;
	}
	if(fwrite(s,sizeof(char),strlen(s),fp)<strlen(s)){
		cout<<"write error 2"<<endl;
		return -1;
	}
	cout<<"after write"<<endl;
	sleep(15);
	count<<"after write"<<endl;
	close(fd);
	return 0;
}
