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

struct node* mirrorTree(struct node* root)
{
 struct node *temp;
 if(root==NULL)
	return;
 mirrorTree(root->left);
 mirrorTree(root->right);
 temp = root->left;
 root->left = root->right;
 root->right = temp;

 return root;
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
 struct node *root = newNode(10);
 root->left = newNode(3);
 root->left->left = newNode(9);
 root->left->right = newNode(8);
 root->right = newNode(4);
 root->right->left = newNode(7);
 root->right->right = newNode(5);
  
 mirrorTree(root); 
 preorder(root);
    return 0; 

}
