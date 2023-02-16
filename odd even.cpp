#include<stdio.h>
#include<conio.h>
int main()
{
	int num,m,n,i;
	printf("enter start range");
	scanf("%d",&n);
	printf("enter end range");
	scanf("%d",m);
	if(m>0 && n>0 && m>n)
	{
		printf("odd:\n");
		for(i=n;i<m;i++)
		{
			if(i%2!=0)
			{
				printf("%d\n",i);
			}
        }
	}
    else
    {
    	printf("invalid input");
	}
}
