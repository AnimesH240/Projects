/*Program to find value of sine*/
#include <stdio.h>
#include <math.h>

int main()
{
  double value, x;                                  //Declare Variables
  printf("Enter value to x(between 0 & 1): ");
  scanf("%lf", &x);                                 //Input value of x

  value = sin(x);                                   //Calculate value of Sine

  printf("The Sine value of %lf = %lf ", x, value); //Print result

  return 0;
}
