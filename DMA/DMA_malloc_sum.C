#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int sum;
	printf("Enter the num of elements: ");
	scanf("%d",&n);
	int* ptr=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Enter number: ");
		scanf("%d",(ptr+i));
	}
	for(int i=0;i<n;i++){
		 sum=sum+*(ptr+i);
	}
	printf("The summation is %d",sum);
	free(ptr);
	
	
	
}
