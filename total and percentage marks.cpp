#include <stdio.h>
struct student
{
    int  marks[5];
    int  total;
    float percentage;
};
int main()
{
    struct student std;
    int i;
    printf("Enter marks:\n");
    std.total=0;
    for(i=0;i<5;i++)
	{
        printf("Marks in subject %d:",i+1);
        scanf("%d",&std.marks[i]);
        std.total+=std.marks[i];
    }
    std.percentage=(std.total/(float)500)*100;
    printf("\nTotal Marks: %d \nPercentage: %.2f",std.total,std.percentage);
    return 0;
}
