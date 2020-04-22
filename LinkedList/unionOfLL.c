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

struct node * unionOfLL(nodeptr head1,nodeptr head2)
{
 int hash[100] = {0};
 struct node *p=head1,*q=head2,*result=NULL,*temp=;
 while(p!=NULL)
 {
	hash[p->data]++;
	result = p;
	printf("%d ",result->data);
    p = p->next;
    result = result->next;	
 }

 /*while(q!=NULL)
 {
	hash[q->data]++;
    q = q->next;
 }*/


 printf("Union of two LL is:\n");
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
 
 unionOfLL(head1,head2);
 printf("\n");
 //middle(head); 
 return 0;	
}
