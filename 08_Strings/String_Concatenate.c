#include<stdio.h>
#include<string.h>
//String concatenation joins two strings into one using the strcat() function.
int main(){
	char str1[20]="Hello";
	char str2[]=" Sonal";	
	strcat(str1, str2);
	printf("%s", str1);
}
