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
}

//Print middle of linked list..

nodeptr canceledOut(nodeptr head)
{
 nodeptr start=head;
 nodeptr end;
 
  while(start)
  {
    int sum =0;
	end = start->next;
	int modified = 0;
	
	while(end)
	{
		sum += end->data;
		if(sum == 0)
		{
			start->next = end->next;
			modified = 1;
			break;		
		}
		end = end->next;
	}
     
 	if(!modified)
		start = start->next;
   }

  
  return head;
}



int main()
{
 nodeptr head;
 head=create(head);
 printf("Singly linked list implemntation:-\n");
 display(head);

 canceledOut(head);
 printf("\nLL after cancled out elements whose sum is zero\n");
 display(head);
 printf("\n") ;
 return 0;	
}
