#include<stdio.h>
int main(int argc,char *argv[])
{
	if(argc>1){
		printf("hello ,%s",argv[1]);
	}
	else{
		printf("please provide a name as a command-line argument.\n");
	}
    return 0;
}