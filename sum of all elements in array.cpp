#include<stdio.h>
#include<conio.h>
#define max 200
int main()
{
	int arr[max];
	int i,n,sum=0,*ptr;
	printf("enter size of array");
	scanf("%d",&n);
	printf("\nEnter elements");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr=arr;
	for(i=0;i<n;i++)
	{
		sum=sum+*ptr;
		ptr++;
	}
	printf("the sum of array elements:%d",sum);
}
