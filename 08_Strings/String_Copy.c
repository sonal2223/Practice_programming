#include<stdio.h>
#include<string.h>
//String copy is used to copy one string into another using the strcpy() function.
int main(){
	char source[]="Hello";
	char destination[20];
	
	strcpy(destination, source);
	
	printf("%s", destination);
}
