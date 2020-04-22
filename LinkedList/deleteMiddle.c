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

nodeptr deleteMiddle(nodeptr head)
{
 nodeptr prev;
 nodeptr slwptr = head;
 nodeptr fastptr = head;

 if(head==NULL)			//Base cases
	return 0;
 if(head->next==NULL)
  {
	free(head);
	return 0;
  }
 while(fastptr!=NULL && fastptr->next!=NULL)
 {
   prev = slwptr;
   slwptr = slwptr->next;
   fastptr = fastptr->next->next;
 }
 prev->next = slwptr->next;
 free(slwptr);
 return head;

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
 deleteMiddle(head);
 printf("After deleteing middle LL is:\n");
 display(head);
 return 0;
}
