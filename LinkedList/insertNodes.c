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

nodeptr insert(nodeptr head,int pos,int data)
{
 int k=1;
 nodeptr p,q,newNode;
 newNode = NODEALLOC;
 if(!newNode)
 {
   printf("Memory error");
   return;
 }

 newNode->data=data;
 p=head;
 if(pos==1)
 {
  newNode->next=p;
   head=newNode;
 }
 else
 {
   while((k<pos) && (p!=NULL))
   {
    k++;
    q=p;
    p=p->next;
   }
   if(p==NULL)			//Insert at end
   {
      q->next=newNode;
      newNode->next=NULL;
    }
   else
   {
      q->next=newNode;		//Insert at middle
      newNode->next=p;
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
 printf("\nInsert a node in singly linked list at according to user permission:\n");
 int pos=4;
 int data=15 ;
 head=insert(head,pos,data);
 display(head);
  printf("\n");
 return 0;
}
