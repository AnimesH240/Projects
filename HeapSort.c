#include <stdio.h>
#include <stdlib.h>

void HeapSort();//To build max heap & heap sort
void Heapify();
void Swap();//To swap elements

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

    HeapSort(array, n);

    printf("Sorted array: \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", array[i]);
    }
}

void HeapSort(int array[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        Heapify(array, n, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        Swap(&array[0], &array[i]);
        Heapify(array, i, 0);
    }
}

void Heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        Swap(&arr[i], &arr[largest]);
        Heapify(arr, n, largest);
    }
}

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}