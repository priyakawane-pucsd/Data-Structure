#include<stdio.h>
#include<stdlib.h>
#define NODEALLOC (struct node *)malloc(sizeof(struct node))

struct node
{
 struct node *next;
 int data;
};
 
typedef struct node * nodeptr;

int getcount(nodeptr head)
{
 nodeptr current = head;
 int cnt=0;
 while(current!=NULL)
 {
  cnt++;
  current=current->next;
 }
 return cnt;
}

int _getIntersection(int d,nodeptr head1,nodeptr head2)
{
 nodeptr current1 = head1;
 nodeptr current2 = head2;
 for(int i=0;i<d;i++)
 {
   if(current1==NULL)
    {
	return -1;
    }
   current1 = current1->next;
 }
 
 while(current1!=NULL && current2!=NULL)
 {
   if(current1->data==current2->data)
     {
	return current1->data;
     }
   current1 = current1->next;
   current2 = current2->next;
 }
 return -1;
}


int getIntesectionNode(nodeptr head1,nodeptr head2)
{
 int c1 = getcount(head1);
 int c2 = getcount(head2);
 int d;
 if(c1>c2)
 {
   d = c1-c2;
   return _getIntersection(d,head1,head2);
 }
 else
 {
  d = c2-c1;
  return _getIntersection(d,head2,head1);
 }

}



int main()
{
 nodeptr newNode; 
    nodeptr head1 =NODEALLOC; 
    head1->data = 10; 
  
    nodeptr head2 = NODEALLOC; 
    head2->data = 3; 
  
    newNode = NODEALLOC; 
    newNode->data = 6; 
    head2->next = newNode; 
  
    newNode = NODEALLOC; 
    newNode->data = 9; 
    head2->next->next = newNode; 
  
    newNode = NODEALLOC; 
    newNode->data = 15; 
    head1->next = newNode; 
    head2->next->next->next = newNode; 
  
    newNode = NODEALLOC; 
    newNode->data = 30; 
    head1->next->next = newNode; 
  
    head1->next->next->next = NULL; 
  
    printf("\n The node of intersection is %d \n", 
           getIntesectionNode(head1, head2)); 


}
