#include <stdio.h>
#include <math.h>

void main()
{
  int n, i;
  float data[10000], mean, variance, SD, sum=0, sum1=0;

  printf("Enter no. of elements:");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  {
    scanf("%f",&data[i]);
  }

  for(i=0;i<n;i++)
  {
    sum = sum + data[i];
  }
  mean = sum / (float)n;
  for(i=0;i<n;i++)
  {
    sum1 = sum1 + pow((data[i]-mean),2);
  }

  variance = sum1 / (float)n;
  SD = sqrt(variance);
  
  printf("Mean=%f\n",mean);
  printf("variance=%f\n",variance);
  printf("Standard Variation=%f\n",SD);
}
