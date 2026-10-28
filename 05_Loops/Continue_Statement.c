#include<stdio.h>
//The continue statement skips the current iteration and moves to the next iteration of a loop.
int main(){
	int i;
	for( i=1; i<=5; i++){
		if(i==3)
		continue;
		
		printf("%d\n",i);
	}
}
