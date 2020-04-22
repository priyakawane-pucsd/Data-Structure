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

int checkPermutations(nodeptr head1,nodeptr head2)
{
 struct node *p=head1,*q=head2;
 int sum1=0,sum2=0,mul1=1,mul2=1;

 while(p!=NULL)
 {
  sum1 += p->data;
  mul1 *=  p->data;
  p = p->next;
 }

 while(q!=NULL)
 {
  sum2 += q->data;
  mul2 *= q->data;
  q = q->next;
 }

 if(sum1==sum2 && mul1==mul2)
 	return 1;
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
 
 int val = checkPermutations(head1,head2);
 if(val==1)
	printf("Two LL are permutations of eachother");
 else
		printf("Two LL are not permutations of eachother");
 printf("\n");
 //middle(head); 
 return 0;	
}
