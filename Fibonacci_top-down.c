#include<stdio.h>
#define size 50

int result[size];

void init_result()
{
    int i;
    for(i = 0; i < size; i++)
        result[i] = -1;
}

int Fibonacci(int N)
{
    if(result[N] == -1)
    {
        if(N <= 1)
            result[N] = N;
        else
            result[N] = Fibonacci(N-1) + Fibonacci(N-2);
    }

    return result[N];
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    init_result();
    printf("Fib(%d) = %d\n",n,Fibonacci(n));

    return 0;
}