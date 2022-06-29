#include <stdio.h>
#include <math.h>

int fac(int x)
{
	int i,fac=1;
	for(i=1;i<=x;i++)
		fac=fac*i;
	return fac;
}

int main()
{
	float x,Q,sum=0;
	int i,j,n;

	printf("Input the value of x: ");
	scanf("%f",&x);

	printf("Input number of terms: ");
	scanf("%d",&n);

	Q=x;
	x = x*(3.1415/180);

	for(i=1,j=1;i<=n;i++,j=j+2)
	{
		if(i%2!=0)
		{
			sum=sum+pow(x,j)/fac(j);
		}
		else
			sum=sum-pow(x,j)/fac(j);
	}

	printf("The sum is: %f",sum);
	return 0;
}
