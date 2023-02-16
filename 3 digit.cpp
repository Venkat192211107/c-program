#include<stdio.h>
int main()
{
	int n,l,f,m,sum,t1;
	printf("enter a 3 digit number");
	scanf("%d",&n);
	f=n/100;
	t1=n%100;
	l=t1%10;
	m=t1/10;
	printf("\nfirst digit=%d\nmiddle digit=%d\nlast=%d\n,f,m,l");
	sum=l+m+f;
	printf("\nsum of all three digits :%d,sum");
	return 0;
}
