#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include <sys/wait.h>
int main(int argc,char *argv[]){

	int fd[2]; //filedescription 
	if(pipe(fd) == -1){
		printf("An error occured  with opening the file");
		return 1;
	}
	int id = fork();  //making clone process(child)
	
	if ( id == 0){
		printf("CHILD's Process Running \n");
		close(fd[0]); // closing the reading end
		char mess[100] ; 

		printf("Enter your message : ");
		//scanf("%s",mess);
		fgets(mess,sizeof(mess),stdin);
		write(fd[1],mess,strlen(mess)+1);
		close(fd[1]); //closinf writing end
	}
	else{
		wait(NULL); 
		printf("Parent's Process Running \n ");
		close(fd[1]);
		char mess2[100];
		read(fd[0],mess2 ,sizeof(mess2));
		close(fd[0]);
		printf("Received: %s\n", mess2);
	}
	
        return 0;
}
