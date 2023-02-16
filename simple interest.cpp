#include<stdio.h>
int main()
{
	int pa,noy,r,interest;
	char sc;
    int simple(int,int,int);
	printf("enter the princple amount");
	scanf("%d",&pa);
	printf("enter the number of years");
	scanf("%d",&noy);
    printf("is customer senior citizen(y/n)");
    scanf("%c",&sc);
    if (sc=='y')
    	r=12;
    else 
    	r=10;
    printf("SI = %d",simple(pa,noy,r));
    return 0;
}
int simple(int pa, int noy, int r)
  {
    int interest;	
    interest=(pa*noy)/10;
    return(interest);
}

