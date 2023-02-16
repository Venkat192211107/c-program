#include<stdio.h>
int main()
{
	int i,number;
	printf("\nEnter the maimum limit value:");
	scanf("%d",&number);
	printf("\nEven numbers between 1 and %d are\n:",number);
	for(i=1;i<=number;i++)
	{
	if(i%2==0)
	  {
	  	printf("%d\t",i);
	  }
	}
	return 0;
}
