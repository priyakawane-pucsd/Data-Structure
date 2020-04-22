#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node *)malloc(sizeof(struct node))

struct node
{
 struct node *next;
 int data;
};
 
typedef struct node * nodeptr;

//CREATE FUNCTION TO CREATE LINKED-LIST
nodeptr create(nodeptr head)
{
 nodeptr current,p;
 int n;
 printf("How many nodes?\n");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
  p=NODEALLOC;
  p->next = NULL;
  printf("Enter data: ");
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

nodeptr deleteSinglyLL(nodeptr head)
{
 nodeptr temp;
 temp=head;
 while(head)
 {
  
  head = head->next;
  free(temp);
  temp=head;
 }
 head=NULL;
//return head;
}


nodeptr display(nodeptr head)
{
 nodeptr temp=head;
 while(temp!=NULL)
 {
  printf("%4d",temp->data);
 temp=temp->next; 
 }
printf("\n"); 	
}


int main()
{
 nodeptr head;
 head = create(head);
 printf("Singly linkedlist creation:\n");
 display(head);
 deleteSinglyLL(head);
 display(head);
 return 0;
}
