#include<stdio.h>
int main()
{
	float n,square,cube;
	printf("enter a number:");
	scanf("%f",&n);
	square = n * n;
	cube = n * n * n;
	printf("square of the number:%f",square);
	printf("\ncube of the number:%f",cube);
	return 0;
}
