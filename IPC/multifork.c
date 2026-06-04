#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include <sys/wait.h>
int main(int argc,char* argv[]){
        int id = fork();
        int id2 = fork();
        if(id == 0){
                if(id2 == 0){
                        printf("i'M CHILD'S child \n");
                }
                else{
                        printf("Child but parent \n ");
                }
	}
        else{ 
		if(id2 == 0){
			printf("I.m also child but without a child \n ");
		}
		else{
			printf("SABKA Parent \n");
		}
	}
        return 0; 
}
