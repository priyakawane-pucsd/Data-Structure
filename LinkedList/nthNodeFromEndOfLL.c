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
  printf("Enter data");
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

nodeptr printNthFromLast(nodeptr head,int n)
{
 nodeptr main_ptr = head;
 nodeptr ref_ptr = head;
 int cnt=0;
 if(head!=NULL)
 {
  while(cnt<n)
  {
    if(ref_ptr == NULL) 
        { 
           printf("%d is greater than the no. of nodes in list\n", n); 
           return; 
        } 
    ref_ptr=ref_ptr->next;
    cnt++; 
  }
  while(ref_ptr!=NULL)
  {
   main_ptr=main_ptr->next;
   ref_ptr=ref_ptr->next;
  }
 }
 printf("Nth node from end of LL is %d\n",main_ptr->data);
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
 int n=5;
 printNthFromLast(head,n);
 return 0;
}
