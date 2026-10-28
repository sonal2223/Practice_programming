#include<stdio.h>
//The break statement immediately terminates a loop.
int main(){
	int i;
	for(i=1; i<=10; i++){
		if(i==6){
			break;
		}
		printf("%d\n",i);
	}
}
