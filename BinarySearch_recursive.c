#include <stdio.h>
#include <stdlib.h>

int BinarySearch_recursive(int array[], int start_index, int end_index, int target)
{
    if (start_index > end_index)
    {
        return -1;
    }

    int mid_index = (start_index + end_index) / 2;

    if (target == array[mid_index])
    {
        return mid_index;
    }

    if (target < array[mid_index])
    {
        return BinarySearch_recursive(array, start_index, mid_index - 1, target);
    }

    else
    {
        return BinarySearch_recursive(array, mid_index + 1, end_index, target);
    }
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

    int target_index = BinarySearch_recursive(array, 0, n - 1, target);

    if (target_index != -1)
    {
        printf("Element found in the array!!!");
    }
    else
    {
        printf("Element not found in the array!!!");
    }

    return 0;
}
