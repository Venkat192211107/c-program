#include<stdio.h>
void swap(int*,int*);
int main()
{
	int x,y;
	printf("enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	printf("before swapping\nx=%d\ny=%d\n",x,y);
	swap(&x,&y);
	printf("after swapping\nx=%d\ny=%d\n",x,y);
	return 0;
}
void swap(int*a,int*b)
{
	int temp;temp = *b;
	*b=*a;
	*a=temp;
}
