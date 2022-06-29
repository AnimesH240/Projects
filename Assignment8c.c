#include <stdio.h>

int main()
{
  int n,i,k,count=1;
  printf("Enter number of rows:");
  scanf("%d", &n);
  count=n-1;
  for(k=1;k<=n;k++)
  {
    for(i=1;i<=count;i++)
      printf(" ");
      count--;
    for(i=1;i<=2*k-1;i++)
      printf("*");
    printf("\n");
  }
  count=1;
  for(k=1;k<=n-1;k++)
  {
    for(i=1;i<=count;i++)
      printf(" ");
    count++;
    for(i=1;i<=2*(n-k)-1;i++)
      printf("*");
    printf("\n");
  }
  return 0;
}
