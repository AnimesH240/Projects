#include<stdio.h>

int main()
{
 int r,c,sp,n;
 printf("Enter number of rows:");
 scanf("%d", &n);
 for(r=1;r<=n;r++)
 {
  for(sp=1;sp<=n-r;sp++)
     printf("  ");
  for(c=1;c<=2*r-1;c++)
     printf(" %d",c);
  printf("\n");
 }
 return 0;
}
