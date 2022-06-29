#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int size;
int *arr;
int removed = 0;

void create()
{
	arr = (int*) malloc(size * sizeof(int));
	int i;
	printf("\nEnter %d values: ", size);
	for (i = 0; i < size; i++)
  {
		scanf("%d", &arr[i]);
	}
}

void print_array()
{
	int i;
	printf("\n");
	for (i = 0; i < size; i++)
  {
		printf("%d\t", arr[i]);
	}
}

void insert(int v)
{
	if (removed == size)
  {
		printf("\nAll %d items replaced!", size);
		exit(0);
	}
	int rem = arr[size-1];
	printf("\nRemoved: %d", rem);
	int i;
	for (i = size-1; i > 0; i--)
  {
		arr[i] = arr[i-1];
	}
	arr[0] = v;
	printf("\nPushed: %d", v);
	removed++;
}

void insert_mult(int s)
{
	int i;
	printf("\nEnter %d values:", s);
	for (i = 0; i < s; i++)
  {
		int v;
		scanf("%d", &v);
		insert(v);
	}
}

void main()
{
	printf("\nEnter N: ");
	scanf("%d", &size);
	create();
	int ins = 1;
	while(1)
  {
		print_array();
		insert_mult(ins);
		ins++;
		printf("\n");
	}
}
