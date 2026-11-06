#include<stdio.h>
#include<string.h>
//String comparison checks whether two strings are equal or different using the strcmp() function.
int main(){
	char str1[]="HELLO";
	char str2[]="Hello";
	if(strcmp(str1,str2)==0){
		printf("Strings are equal");
	}else{
		printf("Strings are different");
	}
}
