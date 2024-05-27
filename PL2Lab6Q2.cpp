#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char* str =(char*)malloc(20 * sizeof(char));
	if(str == NULL){
		printf("Memory is not allocated. \n");
		exit(0);
	}
	else{
	strcpy(str,"Basar Can Kilic");
	printf("%s",str);
}
	return 0;
}
