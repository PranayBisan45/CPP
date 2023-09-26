#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	char* ptr;
	printf("Enter number of characters: ");
	scanf("%d",&n);
	ptr=(char*)malloc (n* sizeof(char)+1);
	printf("Accept a string ");
	scanf("%s",ptr);
	printf("Display string ");
	printf(ptr);
	 
	
	free(ptr);
	
	
	
}
