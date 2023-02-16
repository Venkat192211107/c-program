#include<stdio.h>
#define max 100
int main()
{
	int arr[max];
	int n,i;
	int*ptr=arr;
	printf("enter the size if the array");
	scanf("%d",&n);
	printf("enter the elements in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=arr;
	printf("array elements");
	for(i=0;i<n;i++)
	{
		printf("%d",*ptr);
		ptr++;
	}
	return 0;
}
