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

int printAncester(struct node* root,struct node *node)
{
 if(root==NULL)
	return 0;

  if(root->left == node  || root->right == node || printAncester(root->left,node) || printAncester(root->right,node))
   {
	printf("%d ",root->data);
    return 1;
   }

 return 0;
}

int main()
{
 struct node *root = newNode(10);
 root->left = newNode(3);
 root->left->left = newNode(9);
 root->left->right = newNode(8);
 root->left->right->right = newNode(12);
 root->right = newNode(4);
 root->right->left = newNode(7);
 root->right->right = newNode(5);
  
 printAncester(root,root->left->right->right); 

 return 0; 

}
