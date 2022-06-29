#include <stdio.h>
#include <stdlib.h>

int stack[20];
int top = -1;
void push();
void pop();
void display();
int pop_exp();
void push_exp();
int isdigit();
struct node
{
  int val;
  struct node *next;
}*head;

int main ()
{
  int choice = 0;
  while(choice != 4)
  {
    printf("\n Enter your choice: ");
    printf("\n1.Push\n2.Pop\n3.Display\n4.Evaluate Postfix Expression\n5.Exit\n");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1:
      {
        push();
        break;
      }
      case 2:
      {
        pop();
        break;
      }
      case 3:
      {
        display();
        break;
      }
      case 4:
      {
        char exp[20];
        char *e;
        int n1,n2,n3,num;
        printf("Enter the expression: ");
        scanf("%s",exp);
        e = exp;
        while(*e != '\0')
        {
            if(isdigit(*e))
            {
                num = *e - 48;
                push_exp(num);
            }
            else
            {
                n1 = pop_exp();
                n2 = pop_exp();
                switch(*e)
                {
                case '+':
                {
                    n3 = n1 + n2;
                    break;
                }
                case '-':
                {
                    n3 = n2 - n1;
                    break;
                }
                case '*':
                {
                    n3 = n1 * n2;
                    break;
                }
                case '/':
                {
                    n3 = n2 / n1;
                    break;
                }
              }
              push_exp(n3);
            }
            e++;
        }
        printf("\nThe result of expression %s  =  %d\n",exp,pop_exp());
        return 0;
      }
      case 5:
      {
        printf("Exiting....");
        exit(0);
        break;
      }
      default:
      {
        printf("Please Enter valid choice: ");
      }
    };
  }
  return 0;
}

void push ()
{
  int val;
  struct node *ptr = (struct node*)malloc(sizeof(struct node));
  if(ptr == NULL)
  {
    printf("Not able to push the element!!");
  }
  else
  {
    printf("Enter the value: ");
    scanf("%d",&val);
    if(head == NULL)
    {
      ptr -> val = val;
      ptr -> next = NULL;
      head = ptr;
    }
    else
    {
      ptr -> val = val;
      ptr -> next = head;
      head = ptr;
    }
    printf("Item pushed!!");
  }
}

void pop()
{
  struct node *ptr;
  if (head == NULL)
  {
    printf("Underflow!!");
  }
  else
  {
    ptr = head;
    head = head -> next;
    free(ptr);
    printf("Item popped!!");
  }
}

void display()
{
  int i;
  struct node *ptr;
  ptr = head;
  if(ptr == NULL)
  {
    printf("Stack is empty!!\n");
  }
  else
  {
    printf("Printing Stack elements...\n");
    while(ptr != NULL)
    {
      printf("%d\n", ptr -> val);
      ptr = ptr -> next;
    }
  }
}

void push_exp(int x)
{
    stack[++top] = x;
}

int pop_exp()
{
    return stack[top--];
}
