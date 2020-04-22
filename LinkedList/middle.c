#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node *)malloc(sizeof(struct node))
struct node
{
 struct node *next;
 int data;
};
typedef struct node * nodeptr;

nodeptr create(nodeptr head)
{
 int n;
 nodeptr current,p;
 printf("How many naodes you want?:-");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  p=NODEALLOC;
  p->next=NULL;
  printf("Enter data:");
  scanf("%d",&p->data);
  if(head==NULL)
   {
    head=current=p;
   }
  else
  {
   current->next=p;
   current=p;
  }
 }
 return head;
}

nodeptr display(nodeptr head)
{
 nodeptr temp=head;
 while(temp!=NULL)
 {
  printf("%4d\t",temp->data);
  temp=temp->next;
 }
}

//Print middle of linked list..

nodeptr middle(nodeptr head)
{
 nodeptr slowptr=head;
 nodeptr fastptr=head;
 //if(head!=NULL)
 //{
  while(fastptr!=NULL && fastptr->next!=NULL)
  {
    fastptr=fastptr->next->next;
    slowptr=slowptr->next;  
   }
  printf("\nMiddle of linked list is %d\n",slowptr->data);
  //}
}


int main()
{
 nodeptr head;
 head=create(head);
 printf("Singly linked list implemntation:-\n");
 	display(head);

 middle(head); 
 return 0;	
}
