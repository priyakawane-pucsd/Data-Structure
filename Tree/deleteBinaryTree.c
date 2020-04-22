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


void deleteTree(struct node* root) 
{ 
	if(root == NULL)
		return ;
	
    deleteTree(root->left);
	//printf("***Node to be delete is %d\n",root->data);
	deleteTree(root->right);
	printf("Node to be delete is %d\n",root->data);
	free(root);
} 

/*
             1 
           /   \ 
          2      3 
        /  \     
       4    5  

 */	

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
	//root->right->left = newNode(9);
    //root->right->right = newNode(25); 
  
   deleteTree(root);
  
    return 0; 

}
