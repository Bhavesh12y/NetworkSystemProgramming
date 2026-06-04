#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char* argv[]){
	int id = fork();
	printf(" Hi from id  : %d \n ",id);
	return 0;
}
