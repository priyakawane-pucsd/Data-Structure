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


int findMax(struct node* root) 
{ 
    // Base case 
    if (root == NULL) 
      return ; 
  
    // Return maximum of 3 values: 
    // 1) Root's data 2) Max in Left Subtree 
    // 3) Max in right subtree 
    int res = root->data; 
	printf("\nres: %d\n",res);
	
	
    int lres = findMax(root->left);
	//printf("\nlres: %d ",lres); 

    int rres = findMax(root->right); 
	//printf("\nrres: %d ",rres); 
    if (lres > res) 
      res = lres; 
    if (rres > res) 
      res = rres; 
    return res; 
} 



int main()
{
    struct node* root = newNode(10);
	//printf("%d\n",root->data); 
    root->left = newNode(2); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    //root->left->right->left = newNode(10); 
    //root->left->right->right = newNode(14); 
    root->right = newNode(3); 
    //root->right->right = newNode(25); 
  
    printf ("Maximum element is %d \n", findMax(root)); 
  //findMax(root); 
  
    return 0; 

}
