//Queue using array.
#include<stdio.h>
int array[100], head = 0, tail = 0;

void Display()
{
  int i = 0;
  for (i = head; i < tail; i++)
  {
    printf(" %d ", array[i]);
  }
}

void enqueue(int data)
{
  if (tail == 100)
  {
    printf("Queue is Full!!");
  }
  else
  {
    array[tail++] = data;
  }
}

void dequeue()
{
  if (tail == head)
  {
     printf("Queue is Empty!!");
  }
  else
  {
     return array[head++];
  }
}

void main()
{
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  enqueue(50);

  Display();
  dequeue();
  Display();
}
