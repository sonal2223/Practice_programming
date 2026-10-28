#include<stdio.h>
The break statement immediately terminates a loop.
int main(){
	int i;
	for(i=2; i<=10; i++){
		if(i==9){
			break;
		}
		printf("%d\n",i);
	}
}
