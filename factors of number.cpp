#include<stdio.h>
int main()
{
    int  num, i;
    printf("Enter the number to find the factors of :  ");
    scanf("%d",&num);
    printf("\nFactors of %d are", num);
    for(i = 1; i <= num/2; i++)
    {
        if(num%i == 0)
            printf("%d\n", i);
    }
    printf("\nCoding is Fun !\n");
    return 0;
}

