#include <stdio.h>
int main()
{
  char str[1000], rev[1000];
  int i, j, count = 0;
  printf("enter a string:");
  scanf("%s", str);
  printf("\nString Before Reverse: %s", str);
  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;
  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }
  printf("\nString After Reverse: %s", rev);
}
