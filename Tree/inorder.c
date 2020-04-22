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

struct node* inOrder(struct node* root)
{
 if(root==NULL)
	return;
 
 inOrder(root->left);
 printf("%d ",root->data);
 inOrder(root->right);
}



int main()
{
    struct node* root = newNode(1);
	//printf("%d\n",root->data); 
    root->left = newNode(2); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    //root->left->right->left = newNode(10); 
    //root->left->right->right = newNode(14); 
    root->right = newNode(3); 
    //root->right->right = newNode(25); 
  
    inOrder(root); 
  
    return 0; 

}
