#include<stdio.h> 
int main(void) 
{ 
	char buffer[25]; 
	printf("$ "); 
    scanf("%[^\n]*c",buffer); 
	 
	printf("%s\n",buffer); 
	 
} 
