#include <stdio.h>

int fib(int );

int main(){
	int n;
	printf("Enter the no :\n");
	scanf("%d",&n);
	printf("\n fib(%d)= %d \n", n, fib(n));
}

int fib(int m){
	if(m==0)return 0;
	else if(m==1) return 1;
	else{
		return(fib(m-1)+fib(m-2));
	}
}