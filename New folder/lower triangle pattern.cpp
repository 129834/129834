#include<stdio.h>
int main()
{
	int i,j,n=5;
	scanf("%d%d",&i,&j);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		printf("*");
		printf("\n");
	}
}
