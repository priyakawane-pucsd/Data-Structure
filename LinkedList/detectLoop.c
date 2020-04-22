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
 current->next = head;
 return head;
}

int detectLoop(nodeptr head)
{
 nodeptr slwptr = head;
 nodeptr fastptr = head;
 while(slwptr && fastptr)
 {
   
    slwptr = slwptr->next;
    fastptr = fastptr->next->next;
    if(slwptr == fastptr)
    {
	printf("Found Loop\n");
	return 1;
     }
 }
 return 0;
}


nodeptr display(nodeptr head)
{
 nodeptr temp=head;
 while(temp!=NULL)
 {
  printf("%4d",temp->data);
 temp=temp->next; 
 }
}


int main()
{
 nodeptr head;
 head = create(head);
 printf("Singly linkedlist creation:\n");
 //display(head);
 printf("Is there loop in Linked list: ");
 detectLoop(head);
 return 0;
}
