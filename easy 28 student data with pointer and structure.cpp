#include <stdio.h>
struct student
{
    char    name[30];
    int     roll;
    float   mark;
};
int main()
{
    struct student  std;      
    struct student  *ptr;       
    ptr= &std;                 
    printf("Enter details of student : \n");
    printf("\nEnter Name of student : ");
    scanf("%s",ptr->name);
    printf("\nEnter Roll No of student : ");
    scanf("%d",&ptr->roll);
    printf("\nEnter mark of student : ");
    scanf("%f",&ptr->mark);
    printf("\nEntered details of student are : \n");
    printf("\nName : %s \n\nRollNo: %d \n\nmark: %.02f\n\n",ptr->name,ptr->roll,ptr->mark);
    return 0;
}
