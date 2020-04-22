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
 current->next = head->next->next->next;
 return head;
}

nodeptr startNodeOfLoop(nodeptr head)
{
 int loopExists=0;
 nodeptr slwptr = head;
 nodeptr fastptr = head;
 while(slwptr && fastptr)
 {
  slwptr = slwptr->next;
  fastptr = fastptr->next->next;
  if(slwptr==fastptr)
  {
     loopExists = 1;
      break;
   }
 }

 if(loopExists)
 {
   int cnt=1;
  fastptr = fastptr->next;
  while(slwptr!=fastptr)
  {
   fastptr = fastptr->next;
   cnt++;
   }
  printf("Lenght of loop is %d\n",cnt);
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
 startNodeOfLoop(head);
 return 0;
}
