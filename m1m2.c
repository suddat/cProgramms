#include <stdio.h>

int main()
{
	int tour[100],n,i;
	printf("Enter No :\n");
	scanf("%d",&n);
	printf("\n n = %d \n",n);
	for (i = n; i <= 2*n-1; i++)
		scanf("%d",&tour[i]);

	buildTourn(tour,n);

	printf("\n MAX = %d ",tour[1]);
	printf("\n Next Max = %d \n",nextMax(tour,n));
}

buildTourn(int tour[], int n){
	int i;
	for (i = 2*n-2; i > 1  ; i=i-2)
	tour[i/2] = maxi(tour[i], tour[i+1]);
}

int nextMax(int tour[],int n){
	int i=2,next;

	next = mini(tour[2],tour[3]);
	while( i <= 2*n-1){
		if (tour[i] > tour[i+1]){
			next = maxi(tour[i+1],next);
			i=2*i;
		}
		else{
			next = maxi(tour[i],next);
			i=2*(i+1);
		}
	}
	return(next);
}

int maxi(int x,int y){
	int z=0;
	z = (x>=y)?x:y;
	return z;
}

int mini(int x,int y){
	int z=0;
	z = (x<y)?x:y;
	return z;
}