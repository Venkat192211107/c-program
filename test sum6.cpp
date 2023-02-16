#include<stdio.h>
int main()
{
	int pa,noy,r,interest;
	char sc;
	int simple(int,int,int);
	printf("enter the principle amount");
	scanf("%d",&pa);
	printf("enter the number of years");
	scanf("%d",&noy);
	printf("is customer senior citizen (y/n)");
	scanf("%d",&sc);
	if (sc == 'y')
	   r=12;
	else
	   r=10;
	printf("SI = %d",simple(pa,noy,sc));
    return 0;
    {
		int simple(int pa,int noy,int sc);
		interest=pa*noy*sc/100;
    }
}
