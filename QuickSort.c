#include <stdio.h>
#include <stdlib.h>

void QuickSort();//To find pivot element
int Partition();//To find the partition position
void Swap();//To swap elements

int main()
{
    int *array = NULL;
    int n = 0;
    printf("Enter the size of your array: ");
    scanf("%d", &n);
    array = (int*)malloc(n*sizeof(int));
    printf("Enter the elements:\n");
    for (int i = 0; i < n; ++i)
    {
		scanf("%d", &array[i]);
	}

    QuickSort(array, 0, n - 1);

    printf("Sorted array: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d  ", array[i]);
    }
}

void QuickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int PointerIndex = Partition(array, low, high);

        QuickSort(array, low, PointerIndex - 1);//For left of pivot
        QuickSort(array, PointerIndex + 1, high);//For right of pivot
    }
}

int Partition(int array[], int low, int high)
{
    int PivotElement = array[high];

    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (array[j] <= PivotElement)
        {
            i++;
            Swap(&array[i], &array[j]);
        }
    }
    Swap(&array[i + 1], &array[high]);

    return (i + 1);
}

void Swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}