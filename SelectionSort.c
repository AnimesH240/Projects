#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int array[], int n)
{
    int i, j, index, temp;
    for(i = 0; i < n - 1; i++)
    {
        index = i;
        for(j = i + 1; j < n; j++)
        {
            if(array[index] > array[j])
            {
                index = j;
            }
        }
        if(index != i)
        {
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
    }

    printf("Sorted Array: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
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

    SelectionSort(array, n);

    return 0;
}

