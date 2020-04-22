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

//Recursive Approach 
/*
int BSTfindMin(struct node* root) 
{ 
    if (root == NULL) 
      return NULL ; 

	else if(root->left==NULL)
		return root;
	else
		return BSTfindMin(root->left);		  
} */


//Iterative 
int BSTfindMin(struct node* root) 
{
	if (root == NULL) 
      return NULL ; 

	while(root->left!=NULL)
	{
		root = root->left;
	}
 return root;
}


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
  
	struct node* val = BSTfindMin(root);
    printf ("Minimum element in BST is %d \n", val->data); 
  //findMax(root); 
  
    return 0; 

}
