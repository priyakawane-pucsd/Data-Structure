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
  printf("Enter data ");
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

nodeptr delete(nodeptr head,int pos)
{
 int k=1;
 nodeptr p,q;
 if(head==NULL)
 {
   printf("List Empty");
   return;
 }

 p=head;
 if(pos==1)
 {
   head=head->next;
   free(p);
 }
 else
 {
   while((k<pos) && (p->next!=NULL))
   {
    k++;
    q=p;
    p=p->next;
   }
   if(p->next==NULL)			//delete from end
   {
      q->next=NULL;
      free(p);
    }
   else
   {
      q->next=p->next;			//Insert at middle
      free(p);
   }
  }
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
}


int main()
{
 nodeptr head;
 head = create(head);
 printf("Singly linkedlist creation:\n");
 display(head);
 printf("\nDelete a node in singly linked list at according to user permission:\n");
 int pos=4;
 head=delete(head,pos);
 display(head);
  printf("\n");
 return 0;
}
