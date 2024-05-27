#include<stdio.h>
#include<stdlib.h>

int main(){
	int size,i,j,Biggest;
	printf("Enter the size of pointer array: \n"); scanf("%d",&size);
	int *ptr =(int*)calloc(size,sizeof(int));
	
	for(i=0;i<size;i++){
	printf("%d. element is: ",i+1); scanf("%d",&ptr[i]);	
    }
	
	Biggest = ptr[0];
	
	for(j=1;j<size;j++){
		if(Biggest < ptr[j])
		Biggest = ptr[j];
	}
	
	printf("The biggest element is:%d",Biggest);
	
	return 0;
}
