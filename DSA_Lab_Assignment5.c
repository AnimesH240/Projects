#include <stdio.h>
#include <stdlib.h>

void mergesort(int a[],int i,int j);
void quick_sort(int[],int,int);
void merge(int a[],int i1,int j1,int i2,int j2);
int partition(int[],int,int);

int main()
{
	int a[30],b[30], n, choice;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter %d elements in the array: ",n);
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
		b[i] = a[i];
	}

	printf("Enter \n1.For Merge Sort\n2.For Quick Sort\n3.Exit\nChoice: ");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
		{
			mergesort(a,0,n-1);
			break;
		}
		case 2:
		{
			quick_sort(a,0,n-1);
			break;
		}
		case 3:
		{
			exit(0);
		}
		default:
		{
			printf("Invalid Input!!\n");
		}
	}

	printf("\nUnsorted array was: ");
	for(int i = 0;i < n;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\nSorted array is: ");
	for(int i = 0;i < n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

void mergesort(int a[],int i,int j)
{
	int mid;

	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(a,i,mid);		//left recursion
		mergesort(a,mid+1,j);	//right recursion
		merge(a,i,mid,mid+1,j);	//merging of two sorted sub-arrays
	}
}

void merge(int a[],int i1,int j1,int i2,int j2)
{
	int temp[50];	//array used for merging
	int i,j,k;
	i=i1;	//beginning of the first list
	j=i2;	//beginning of the second list
	k=0;

	while(i<=j1 && j<=j2)	//while elements in both lists
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}

	while(i<=j1)	//copy remaining elements of the first list
		temp[k++]=a[i++];

	while(j<=j2)	//copy remaining elements of the second list
		temp[k++]=a[j++];

	//Transfer elements from temp[] back to a[]
	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}

void quick_sort(int a[],int l,int u)
{
	int j;
	if(l<u)
	{
		j=partition(a,l,u);
		quick_sort(a,l,j-1);
		quick_sort(a,j+1,u);
	}
}

int partition(int a[],int l,int u)
{
	int v,i,j,temp;
	v=a[l];
	i=l;
	j=u+1;

	do
	{
		do
			i++;

		while(a[i]<v&&i<=u);

		do
			j--;
		while(v<a[j]);

		if(i<j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}while(i<j);

	a[l]=a[j];
	a[j]=v;

	return(j);
}
