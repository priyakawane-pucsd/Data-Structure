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

struct node* printLeaves(struct node* root)
{
	if(root==NULL)
		return;
 
	printLeaves(root->left);
 		
	if(!(root->left) && !(root->right)) 
        printf("%d ", root->data); 

 printLeaves(root->right);
}


struct node* printRight(struct node* root)
{
	if(root==NULL)
		return;

	if(root->right)
	{
		printRight(root->right);
		printf("%d ",root->data);
	}
	else if(root->left)
	{
		printLeaves(root->left);
		printf("%d ",root->data);
	}
}

struct node* printLeft(struct node *root)		//This function only prints 8,4
{
 if(root==NULL)
	return;

  if(root->left)
  {
	printf("%d ",root->data);
	printLeft(root->left);
  }
  else if(root->right)
  {
	printf("%d ",root->data);
	printLeaves(root->right);
  }

 
}


struct node* printBoundaryElements(struct node* root)
{
 
 printf("%d ",root->data);
 printLeft(root->left);
 printLeaves(root->left);
 printLeaves(root->right);
 printRight(root->right);
}

int main()
{
    struct node* root = newNode(20);
	//printf("%d\n",root->data); 
    root->left = newNode(8); 
    root->left->left = newNode(4); 
    root->left->right = newNode(12); 
    root->left->right->left = newNode(10); 
    root->left->right->right = newNode(14); 
    root->right = newNode(22); 
	root->right->left = newNode(21); 
    root->right->right = newNode(25); 
  
    printBoundaryElements(root); 
  
    return 0; 

}
