#include<stdio.h>
#include<math.h>
void main()
{
    float r;
    float i;
    printf("Enter the interval: ");
    scanf("%f",&r);
    printf("\nAngle   \t Sin     \t Cos ");
    for(i = 0.0 ; i < 1.0 ; i = i + r)
    {
        printf("\n%f \t %f \t %f \n", i, sin(i), cos(i));
    }
}
