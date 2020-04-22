#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node *left;
 struct node *right;
};

struct node* newNode(int data) 
{ 
    struct node* node = (struct node*)malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = node->right = NULL; 
  
    return node; 
} 


int sizeOfTree(struct node* root) 
{ 
	int temp;
    // Base case 
    if (root == NULL) 
      return 0; 
  	//printf("%d\n",root->data);
	temp = 1+ sizeOfTree(root->left)+sizeOfTree(root->right);
	return temp;
} 



int main()
{
    struct node* root = newNode(10);
	//printf("%d\n",root->data); 
    root->left = newNode(2); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    //root->left->right->left = newNode(10); 
    //root->left->right->right = newNode(14); 
    root->right = newNode(3); 
	root->right->left = newNode(9);
    //root->right->right = newNode(25); 
  
   int val = sizeOfTree(root); 
   if(val==0)
   {
  	 printf ("%d\n",val); 
   }
   else
   {
	  	 printf ("%d\n",val); 
   }
  //findMax(root); 
  
    return 0; 

}
