#include<stdio.h>
#include<string.h>
#define SIZE 20
struct bookdetail
{
          char title[20];
          char author[20];
          char subject[20];
          int book_id;
 
};
void output(struct bookdetail v[],int n);
int main()
{
          struct bookdetail b[SIZE];
          int num,i;
          printf("Enter the Numbers of Books:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)
          {
                   printf("\t=:Book %d Detail:=\n",i+1);
                   printf("\nBook title:\n");
                   scanf("%s",b[i].title);
                   printf("book author:\n");
                   scanf("%s",b[i].author);
                   printf("book subject:\n");
                   scanf("%s",&b[i].subject);
                   printf("book ID:\n");
                   scanf("%d",&b[i].book_id);
          }
          output(b,num);
}
void output(struct bookdetail v[],int n)
{
          int i,t=1;
          for(i=0;i<n;i++,t++)
          {
                   printf("\n");
                   printf("Book No.%d\n",t);
                   printf("Book %d title is=%s \n",t,v[i].title);
                   printf("Book %d Author is=%s \n",t,v[i].author);
                   printf("Book %d subject is=%s \n",t,v[i].subject);
                   printf("Book %d book ID is=%d \n",t,v[i].book_id);
                   printf("\n");
          }
}
