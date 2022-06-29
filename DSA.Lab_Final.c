#include <stdio.h>
#include <stdlib.h>

struct node
{
  int num;
  struct node *next;
};

void create(struct node **);// To create Linked list
void tocircular(struct node **);//To convert into circular
void display(struct node *);//To print....

int main()
{
  struct node *p = NULL;
  int result, count;
  printf("Enter data into the list\n");
  create(&p);
  tocircular(&p);
  printf("Circular list generated\n");
  display(p);
  return 0;
}

void create(struct node **head)
{
  int c, i = 1;
  struct node *temp;
  do
  {
    printf("Enter number: ");
    scanf("%d", &c);
    temp = (struct node *)malloc(sizeof(struct node));
    temp->num = c;
    temp->next = *head;
    *head = temp;
    i++;
  }
  while (i <= 7);
  printf("\n");
}

void tocircular(struct node **p)
{
  struct node *rear;
  rear = *p;
  while (rear->next != NULL)
  {
    rear = rear->next;
  }
  rear->next = *p;
}

void display(struct node *head)
{
  struct node *temp = head;
  printf("Displaying the circular list elements: \n");
  printf("%d\t", temp->num);
  temp = temp->next;
  while (head != temp)
  {
    printf("%d\t", temp->num);
    temp = temp->next;
  }
  printf("and back to %d\t%d ..\n", temp->num, temp->next->num);
}
