/*  C program to find maximum and minimum between two numbers by creating functions.  */
#include <stdio.h>

int max(int, int);
int min(int, int);

int main()
{
  int n1, n2, Max, Min;
  printf("Enter any two numbers: ");
  scanf("%d %d", &n1, &n2);

  Max = max(n1, n2);
  Min = min(n1, n2);

  Max == Min ? printf("Both are equal") : printf("Maximum of 2 numbers is %d & Minimum is %d", Max, Min);

  return 0;
}

int max(int n1, int n2)
{
  return (n1 > n2 ) ? n1 : n2;
}

int min(int n1, int n2)
{
  return (n1 > n2 ) ? n2 : n1;
}
