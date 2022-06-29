#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *p;
  p = (int*)malloc(5*sizeof(int));
  int i, max;
  printf("Enter 5 numbers: ");
  for(i = 0; i < 5; i++)
   scanf("%d", &p[i]);

  max = p[0];
  for(i = 1; i < 5; i++)
    if(p[i] > max)
    max = p[i];
  printf("max = %d", max);

  free(p);
  return 0;
}
