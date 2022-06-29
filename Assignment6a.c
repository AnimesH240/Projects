#include<stdio.h>
void main()
 {
   int i,j=0,n,sum=0,a[100];
   printf("Enter the value of n");
   scanf("%d",&n);
   n = n + 1;
   a[0]=1;
   for(i=1;i<=n-1;i++)
   {
     a[i]=a[i-1]+j;
     j++;
     printf("%d\n",a[i]);
     sum=sum+a[i];
   }
  printf("The sum is=%d",sum);
}
