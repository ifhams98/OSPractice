#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main(){
int i=0;
int s=2;
int e;
scanf("%d", &e);

pid_t pid;	// Initializing the process id.


pid=fork();	//creating child process

  //checking whether the process is child.
if(pid==0){
	int s1=s;
	int f1=e/2;
	int i=0,j=0,count1=0,pc=0;

	
	for(i=2; i<=f1;) {
			int count1 = 0;
			for(j=2; j<=i-1; j++) {
				if((i%j) == 0) {
					break;
					count1++;
				}
			}
			if(i==j) {
				printf("%d , ", i);
				pc++;
				//System.out.print("  " + i);
			}
	i++;
}
printf("Child Process: %d\n",pc);
}

  //Parent process
  
else{
	int s2=e/2;
	int f2=e;
	int i1=0,j1=0,count2=0,pc1=0;
	for(i1=s2; i1<=f2;) {
			
			int count2 = 0;
			
			for(j1=2; j1<=i1-1; j1++) {
								
				if((i1%j1) == 0) {
					break;
					count2++;
				}
			}
			if(i1==j1){
				printf("%d , ", i1);		
				pc1++;
				//System.out.print("  " + i);
			}
	i1++;
	}	
printf("Parent Process: %d\n",pc1);
}
}
