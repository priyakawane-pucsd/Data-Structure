#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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

struct node* kthSmall(struct node* root,int k,int count)
{
	if(root==NULL)
		return NULL;

	count++;
	if(count == k)
		return root->data;	

	return kthSmall(root->left,k,count);

	

	//printf("%d\n",root->data);
	return kthSmall(root->right,k,count);
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
  	int n1 = 1,count=0;
    //LCA(root,n1,n2); 
    //int t = kthSmall(root, n1,count); 
     //struct node *val=  kthSmall(root, n1,count);
    printf("kth smallest from BST %d\n",kthSmall(root, n1,count)); 
  
    return 0; 

}
