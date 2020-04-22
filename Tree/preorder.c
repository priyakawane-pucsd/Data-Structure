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

struct node* preorder(struct node* root)
{
 if(root==NULL)
	return;
 printf("%d ",root->data);
 preorder(root->left);
 preorder(root->right);
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
    root->right->right = newNode(25); 
  
    preorder(root); 
  
    return 0; 

}
