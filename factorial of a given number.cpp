#include<stdio.h>
void findFact(int,int*);
int main()
{
	int a,b;
	printf("input a number");
	scanf("%d",&a);
	findFact(a,&b);
	printf("the factorial of %d is: %d\n",a,b);
	return 0;
}
void findFact(int n,int*f)
{
	int i;
	*f=1;
	for(i=1;i<=n;i++)
	*f=*f*i;
}
