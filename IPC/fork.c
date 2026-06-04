#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char* argv[]){
	int id = fork();
	printf("Hello  i'm id : %d \n ",id);
	if(id == 0){
		printf(" hehe child process is here \n ");
	}
	else{
		printf("parent process is here and my child's id is %d \n",id);
	}
	
	printf("Done process by id : %d \n ",id);
	return 0;
}
