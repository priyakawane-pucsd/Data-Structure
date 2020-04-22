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

//Iterative Approach 

int BSTElement(struct node* root,int data) 
{ 
    if(root == NULL) 
      return NULL ; 

	while(root)
	{
		if(data == root->data)
			return root;
		else if(data>root->data)
			root = root->right;
		else
			root = root->left;	
	}
 return NULL;		  
} 


//Recursive Approach
/*
int BSTElement(struct node* root,int data) 
{
	if (root == NULL) 
      return NULL ; 

	if(data<root->data)
		return BSTElement(root->left,data);
	else if(data>root->data)
		return BSTElement(root->right,data);
 	else
		 return root;
}
*/

int main()
{
    struct node* root = newNode(7);
	//printf("%d\n",root->data); 
    root->left = newNode(4); 
    root->left->left = newNode(2); 
    root->left->right = newNode(5); 
    //root->left->right->left = newNode(10); 
    //root->left->right->right = newNode(14); 
    root->right = newNode(9); 
    //root->right->right = newNode(25); 
  
	struct node* val = BSTElement(root,10);
	if(val->data == 0)
		printf ("Element not present in bst"); 
	else
    	printf("Element present in BST is %d \n", val->data);
  //findMax(root); 
  
    return 0; 

}
