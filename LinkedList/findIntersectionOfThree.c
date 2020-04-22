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

struct node *findIntersection(nodeptr head1,nodeptr head2,nodeptr head3)
{
 int hash[100] = {0};
 struct node *p=head1,*q=head2,*r=head3;
 while(p!=NULL)
 {
	hash[p->data]++;
    p = p->next;
 }

 while(q!=NULL)
 {
	hash[q->data]++;
    q = q->next;
 }

 while(r!=NULL)
 {
	hash[r->data]++;
    r = r->next;
 }

 printf("Intersection of three LL is:\n");
 for(int i=0;i<100;i++)
 {
	if(hash[i]==3)
	{
		printf("%d ",i);
    }
 }
}


int main()
{
 nodeptr head1=NULL,head2=NULL,head3=NULL;
 head1 = create(head1);
 head2 = create(head2);
 head3 = create(head3);
 printf("First singly linked list implemntation:-\n");
 display(head1);
 printf("Second singly linked list implemntation:-\n");
 display(head2);
 printf("Third singly linked list implemntation:-\n");
 display(head3);

 findIntersection(head1,head2,head3);
 printf("\n");
 //middle(head); 
 return 0;	
}
