#include <stdio.h>
#include <stdlib.h>

int BinarySearch_iterative(int array[], int start_index, int end_index, int target)
{
   while (start_index <= end_index)
   {
      int mid_index = start_index + (end_index- start_index ) / 2;
      if (array[mid_index] == target)
      {
         return mid_index;
      }
      if (array[mid_index] < target)
      {
         start_index = mid_index + 1;
      }
      else
      {
         end_index = mid_index - 1;
      }
   }
   return -1;
}

int main(void)
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
   int target;
   printf("Search Element: ");
   scanf("%d", &target);
   int target_index = BinarySearch_iterative(array, 0, n - 1, target);
   if(target_index == -1 )
   {
      printf("Element not found in the array!!");
   }
   else
   {
      printf("Element found at index : %d",target_index);
   }

   return 0;
}

