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


int isBST(struct node* root) 
{ 
    static struct node *prev; 
	
      
    // traverse the tree in inorder fashion and keep track of prev node 
    if (root) 
    { 
		printf("%d\n",root->data);
        if(!isBST(root->left)) 
         return 0; 
		
     // Allows only distinct valued nodes  
      if (prev != NULL && root->data <= prev->data) 
          return 0; 
  
        prev = root; 
		printf("prev:%d\n",prev->data);
  
        return isBST(root->right); 
    } 
  
    return 1; 
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
  
	int val = isBST(root);
	if(val == 0)
		printf ("Tree is not a bst\n"); 
	else
    	printf("Given tree is bst\n");
  //findMax(root); 
  
    return 0; 

}
