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


 nodeptr getNode(nodeptr head,int index)
 {
  nodeptr temp=head;
  int count=0;
  while(temp!=NULL)
  {
   if(count==index)
     return temp->data;
    //printf("\nThe node at Index %d is %d\n",index,temp->data);
	//break;
   temp=temp->next;
   count++;
  }
}

int main()
{
  nodeptr head;
  head=create(head);
  printf("Singly linked list implementation:-\n");
  display(head);

  printf("\nPrinting the Nth node from linked list\n");
  getNode(head,2);

 return 0;
}
