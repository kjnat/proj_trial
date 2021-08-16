#include<stdio.h> 
int main(void) 
{ 
	char buffer[25]; 
	char *b = buffer;
        size_t bufsize = 32;
        size_t characters;
	printf("$ "); 
	characters = getline(&b,&bufsize,stdin);
        printf("%s\n",buffer); 
	 
} 
