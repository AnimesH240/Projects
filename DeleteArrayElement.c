/*  C program to delete an element from an array.  */
#include <stdio.h>

int main()
{
  int arr[100], pos, i, n;

  printf("Enter number of elements in array: ");
  scanf("%d", &n);

  printf("Enter %d elements: ", n);
  for (i = 0;i < n;i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter the location to delete element: ");
  scanf("%d", &pos);

  for (i = pos - 1;i < n - 1;i++)
  {
    arr[i] = arr[i + 1];
  }

  printf("New array: ");
  for (i = 0;i < n - 1;i++)
  {
    printf(" %d ", arr[i]);
  }
  return 0;
}
