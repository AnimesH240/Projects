#include <stdio.h>
#include <stdlib.h>

void MergeSort();//To make subarrays
void Merge();//To merge subarrays

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

    MergeSort(array, 0, n - 1);

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

void MergeSort(int array[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        MergeSort(array, low, mid);
        MergeSort(array, mid + 1, high);

        Merge(array, low, mid, high);
    }
}
void Merge(int array[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = array[p + i];
    }
    for (int j = 0; j < n2; j++)
    {
        M[j] = array[q + 1 + j];
    }

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            array[k] = L[i];
            i++;
        }
        else
        {
            array[k] = M[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        array[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        array[k] = M[j];
        j++;
        k++;
    }
}