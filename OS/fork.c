#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>

int main() {
	fork();
	fork();
	fork();
	fork();
	printf("Hello World!\n");
	return 0;
} 
