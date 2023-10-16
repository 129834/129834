#include<stdio.h>
int main()
{
	int i,j,n,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		printf(" ");
		for(j=n-i-1;j<n;j++)
		printf("*");
		printf("\n");
}
	return 0;

}

