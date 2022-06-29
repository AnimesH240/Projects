#include <stdio.h>
int main()
{
    int size, i, max;
    int arr[1000];
    printf("Enter no. of elements:");
    scanf("%d", &size);

    printf("Enter elements in array:");
    for(i=0; i<size; i++)
    {
      scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
      if(arr[i]>arr[i+1])
      {
        max = arr[i];
      }
      else
      {
        max = arr[i+1];
      }
    }
    printf("Max=%d",max);
}
