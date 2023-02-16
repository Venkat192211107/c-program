#include<stdio.h>
int main()
{
	int a[100],i=0,n;
	int *p=a;
	printf("input the number if elements in the array");
	scanf("%d",&n);
	printf("input %d number of elements in the array:\n",n);
	for(i=0;i<n;++i)
	{
		printf("element - %d",i);
		scanf("%d",&a[i]);
	}
	printf("the elements you entered are:\n");
	for(i=0;i<n;i++)
	{
		printf("elements - %d : %d\n",i,*(p));
		p++;
	}
	return 0;
}

