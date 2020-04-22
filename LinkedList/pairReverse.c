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
 printf("\n");
}

struct node *pairReverse(struct node *head)
{
 struct node *temp,*temp2,*current=head;
 
 while(current!=NULL && current->next!=NULL)
 {
	temp = current->next;
	temp2 = temp->next;
	temp->next = current;
	current->next=temp2;
	if(current)
		current = current->next;
 }
 
 while(head!=NULL)
	printf("%d ",head->data);
	head = head->next;
}



int main()
{
 nodeptr head1=NULL,head2=NULL;
 head1 = create(head1);

 printf("First singly linked list implemntation:-\n");
 display(head1);

 pairReverse(head1);
/* 
 nodeptr result = mergeTwoSortedLL(head1,head2);
 while(result!=NULL)
	printf("%d ",result->data);
	result = result->next;*/
 //middle(head); 
 return 0;	
}
