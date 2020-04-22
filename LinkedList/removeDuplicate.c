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

//Remove duplicate from sorted linked list..

nodeptr removeDuplicate(nodeptr head)
{
 nodeptr temp;
 nodeptr current=head;
 while(current->next!=NULL)
 {
  if(current->data==current->next->data)
  {
   temp=current->next->next;
   free(current->next);
   current->next=temp;
  }
  else
  {
  current = current->next;  
   }
 }

 return head;
}

int main()
{
 nodeptr head;
 head=create(head);
 printf("Singly linked list implemntation:-\n");
 display(head);

 head=removeDuplicate(head);
 printf("\nRemove duplicate from sorted linked list is:-\n");
 display(head); 
 return 0;	
}
