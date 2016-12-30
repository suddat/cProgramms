#include <stdio.h>

int main(){
	int n,max,number,i;
	printf("Give numbers to be check from\n");
	scanf("%d",&n);
	if (n>0)
	{
		scanf("%d",&number);
		max = number;
		for (i = 2; i <= n; i++)
		{
			scanf("%d",&number);
			if (number>max)
			{
				max = number;
			}
		}
		printf("Max value is->%d\n",max );
	}
	else{
		printf("Please Enter Numbers for checking\n");
	}
}