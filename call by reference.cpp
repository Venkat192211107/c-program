#include<stdio.h>
#include<conio.h>
int add(int *x,int *y)
{
	//int z;
	return(*x+*y);
	//return(z);
}
int main()
{
	int a,b,c;
	printf("input the first number");
	scanf("%d",&a);
	printf("input the second number");
	scanf("%d",&b);
	c=add(&a,&b);
	printf("the sum of %d and %d is %d",a,b,c);
	return 0;
}
