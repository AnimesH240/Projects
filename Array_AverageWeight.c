#include <stdio.h>

int main()
{
    int n, i;
    float weight[10000], sum = 0.0, avg;

    printf("Enter the numbers of Elephant Seals: "); //Input for number of Elephant Seals(n)
    scanf("%d", &n);

    while (n > 10000 || n < 1) //To check input for "n" is valid
    {
        printf("Error! Please enter number between 1 & 10,000.\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) //Input for weight of "n" number of Seals.
    {
        printf("%d. Enter Weight: ", i + 1);
        scanf("%f", &weight[i]);
        sum += weight[i]; //Adding up the weight for calculating Average
    }

    avg = sum / n; //Calculation of Average
    printf("Average Weight of %d Elephant Seals = %.5f", n, avg); //Printing desired output
    return 0;
}
