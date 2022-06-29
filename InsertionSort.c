#include <stdio.h>
#include <stdlib.h>

void insertionSort(int array[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int temp = array[i];
    int j = i - 1;

    while (temp < array[j] && j >= 0)
    {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = temp;
  }
}

int main()
{
  int *array = NULL;
    int n = 0;
    printf("Enter the size of your array: ");
    scanf("%d", &n);
    array = (int*)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for(int i = 0; i < n; ++i)
    {
      scanf("%d", &array[i]);
    }

  insertionSort(array, n);
  printf("Sorted array: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", array[i]);
  }
}