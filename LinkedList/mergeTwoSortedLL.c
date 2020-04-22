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

struct node *mergeTwoSortedLL(struct node *head1,struct node *head2)
{
 struct node *p=head1,*q=head2,*result=NULL;
 if(head1==NULL)
	return head2;
 
 if(head2==NULL)
	return head1;

 if(head1->data<=head2->data){
	result = head1;
	result->next = mergeTwoSortedLL(head1->next,head2);
  }
 else
 {
	result = head2;
	result->next = mergeTwoSortedLL(head1,head2->next);
 }
 while(result!=NULL)
  {
	printf("%d ",result->data);
	result = result->next;
 }
}



int main()
{
 nodeptr head1=NULL,head2=NULL;
 head1 = create(head1);
 head2 = create(head2);

 printf("First singly linked list implemntation:-\n");
 display(head1);
 printf("Second singly linked list implemntation:-\n");
 display(head2);

  mergeTwoSortedLL(head1,head2);
/* 
 nodeptr result = mergeTwoSortedLL(head1,head2);
 while(result!=NULL)
	printf("%d ",result->data);
	result = result->next;*/
 //middle(head); 
 return 0;	
}
