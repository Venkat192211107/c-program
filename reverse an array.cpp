#include<stdio.h>
int main()
{
	int i,j,temp,arr[]={1,2,3,4,5,6,7},n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=temp;
	}
	for(i=0;i<=n-1;i++)
	printf("%d",arr[i]);
}
