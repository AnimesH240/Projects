//Display a Linked List
#include <stdio.h>
#include <stdlib.h>
struct Node //self referential structure
{
int data;
struct Node *next;
}*first=NULL;
void create(int B[],int n)
{
int i;
struct Node *t,*last;
first=(struct Node *)malloc(sizeof(struct Node));
first->data=B[0];
first->next=NULL;
last=first;
for(i=1;i<n;i++)
{
t=(struct Node*)malloc(sizeof(struct Node));
t->data=B[i];
t->next=NULL;
last->next=t;
last=t;
}
}
void Display(struct Node *p)
{
while(p!=NULL)
{
printf("%d ",p->data);
p=p->next; //null
}
}

int main()
{
int A[]={3,5,7,10,25,8,32,2};
create(A,8); //call
Display(first);
return 0;
}
