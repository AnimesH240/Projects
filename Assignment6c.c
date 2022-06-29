#include<stdio.h>
int main()
{
    double i, n, sum, sum1, sum2;
    printf("No. of terms:");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        if ((int)i%2==1)
            sum1=i/(i+1);
        else
            sum2=i/(i+1);
    }
    sum = sum1 + sum2;
    printf("Sum: %lf",sum1+sum2);
    return 0;
}
