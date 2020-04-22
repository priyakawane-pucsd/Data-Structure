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


int findElement(struct node* root,int data) 
{ 
	int temp;
    // Base case 
    if (root == NULL) 
      return; 
  
    // Return maximum of 3 values: 
    // 1) Root's data 2) Max in Left Subtree 
    // 3) Max in right subtree 
	if(data == root->data)
		return 1;
	else
	{
      temp =findElement(root->left,data); 
	  if(temp!=0)
		return temp;
	  else
    	return (findElement(root->right,data)); 
    }
    return 0; 
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
  
   int val = findElement(root,19); 
   if(val==0)
   {
  	 printf ("Element found not in tree\n"); 
   }
   else
   {
	  	 printf ("Element is found in tree.\n"); 
   }
  //findMax(root); 
  
    return 0; 

}
