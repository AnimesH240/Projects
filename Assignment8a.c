#include<stdio.h>

int main()
{
 int n,r,c,sp;
 printf("Enter number of rows: ");
 scanf("%d",&n);
 for(r=1;n>=r;r++)
 {
  for(sp=n-r;sp>=1;sp--)
     printf(" ");
  for(c=1;c<=r;c++)
     printf("%d",c);
  printf("\n");
 }
 return 0;
}
