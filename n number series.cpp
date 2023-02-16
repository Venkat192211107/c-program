#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	sum = (n*(n+1))/2;
	for(i=0;i<=n;i++)
	{
		if(i!=0)
		{
			printf("%d",i);
		}
		else
		{
			printf("sum of n=%d",sum);
		}
		return 0;
	}
}
