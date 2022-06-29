// Case 4
#include <stdio.h>

int sum(int, int);

int main()
{
  int a, b, c;
  printf("Enter 2 numbers: ");
  scanf("%d %d",&a,&b);
  c = sum(a, b);
  printf("Sum is:%d ", c);
}

int sum(int x, int y)
{
  return x + y;
}
