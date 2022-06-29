/*  C program to implement linear search and binary search on a given array.  */
#include<stdio.h>

int main()
{
  int array[100], i, x, n, last = 0, first, mid;
  printf("Enter number of elements in the array: "); //To get size of array.
  scanf("%d",&n);

  printf("Enter array elements: ");  //To store elements in the array.
  for ( i = 0; i < n;++i )
  {
    scanf("%d",&array[i]);
  }

  printf("Enter element to search:");
  scanf("%d",&x);

  /*  For linear search  */
  for ( i = 0; i < n;++i )
  {
    if(array[i]==x)
    {
      break;
    }
  }
  i < n ? printf(" %d Element found at address %d via linear search\n", x, i) : printf("%d Element not found via linear search\n", x);

  /*  For binary search  */
  first = n - 1;
  mid = ( last + first ) / 2;
  while ( last <= first )
  {
    if ( array[mid] < x)
      last = mid + 1;
    else if ( array[mid] == x)
    {
      printf("%d Element found at address %d via binary search\n", x, mid+1);
      break;
    }
    else
      first = mid - 1;
      mid = ( last + first ) / 2;
  }
  if ( last > first )
  {
    printf("%d Element not found via binary search\n", x);
  }
  return 0;
}
