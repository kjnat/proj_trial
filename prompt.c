#include<stdio.h> 
int main(void) 
{ 
	char string[25]; 
	printf("$ "); 
    scanf("%[^\n]*c",string); 
	 
	printf("%s\n",string); 
	 
} 
