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

struct node* LCA(struct node* root,int n1,int n2)
{
 if(root==NULL)
	return NULL;
 
 if(root->data > n1 && root->data > n2)
	return LCA(root->left,n1,n2);

 if(root->data < n1 && root->data < n2)
	return LCA(root->right,n1,n2);

 return root;
}

/*
             7 
           /   \ 
          4      9 
        /  \     
       2    5  

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
  	int n1 = 5, n2=2;
    //LCA(root,n1,n2); 
    struct node *t = LCA(root, n1, n2); 
    printf("LCA of %d and %d is %d \n", n1, n2, t->data); 
  
    return 0; 

}
