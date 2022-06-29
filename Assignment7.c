#include<stdio.h>
void main()
{
  int b,n,i,r,digit,p,count=0;
  char a[100];
  printf("Enter the decimal number: ");
  scanf("%d",&n);
  b=5;
  p=n;
  do
  {
    r=p%b;
    digit='0'+r;
    if(digit>'9')
      digit=digit+7;
      a[count]=digit;
      count++;
      p=p/b;
  }
  while(p!=0);
  printf("Base 5 equivalent of number %d is ",n);
  for(i=count-1;i>=0;--i)
    printf("%c",a[i]);
}
