#include <stdio.h>

int ReadArray();
int DisplayArray();
int BinarySearch();
int main()
{
  int array[100], n, element;
  printf("Enter Size of array: ");
  scanf("%d", &n);

  printf("Enter %d elements in the array.\n", n);
  ReadArray(array, n);

  printf("Enter the element you want to search: ");
  scanf("%d", &element);

  DisplayArray(array, n);

  int found_index = BinarySearch(array, 0, n - 1, element);
  if(found_index == -1 )
  {
    printf("\nElement not found in the array.");
  }
  else
  {
    printf("\nElement found at index: %d",found_index);
  }
  return 0;
}

int ReadArray(int array[100], int n)
{
  int i;
	for(i = 0;i < n;i++)
  {
    scanf("%d", &array[i]);
  }
}

int DisplayArray(int array[100], int n)
{
  int i;
	for(i = 0;i < n;i++)
  {
    printf("%d  ", array[i]);
  }
}

int BinarySearch(int array[], int start, int end, int element)
{
   while (start <= end)
   {
      int middle = start + (end - start) / 2;
      if (array[middle] == element)
         return middle;
      if (array[middle] < element)
         start = middle + 1;
      else
         end = middle - 1;
   }
   return -1;
}
