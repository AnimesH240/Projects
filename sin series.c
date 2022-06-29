#include <stdio.h>
#include <math.h>

void main()

{

	int x,sum,c;
	int i,n,m,mm,nn;
	printf("Input the value of x :");
	scanf("%d",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =x; m=-1;
	printf("The values of the series: \n");
	printf("%d\n",x);
	
    for (i = 1; i < n; i++)

    {
        c = (2 * i + 1);
        mm = pow(x, c);
        nn = mm * m;
        printf("%d \n",nn);
        sum = sum + nn;
        m = m * (-1);
	   }

	printf("The sum = %d\n",sum);

}
