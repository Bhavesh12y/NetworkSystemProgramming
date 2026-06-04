#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char* argv[]){
	int shared  = 10;
	int id =  fork();
	if( id ==0){
		shared =  shared + 1;
		printf(" child process changed shared var to %d \n", shared);
	}
	else{
		printf("parent see shared var as %d \n", shared);
	}
	printf("done  by id %d \n", id);

        return 0;
}

