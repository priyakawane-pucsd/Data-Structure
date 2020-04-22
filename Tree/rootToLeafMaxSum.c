#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node
{
 int data;
 struct node *left;
 struct node *right;
};

struct node *newNode(int data)
{
 struct node *node = (struct node*)malloc(sizeof(struct node));
 node->data = data;
 node->left = node->right = NULL;

 return node;
}

/*
struct node *preorder(struct node *root)
{
 if(root == NULL)
	return;

 
 preorder(root->left);
 printf("%d ",root->data);
 preorder(root->right);

}*/


int getTargetLeaf(struct node *node, int *max_sum,int curr_sum)
{
 if (node == NULL) 
        return; 
  
    // Update current sum to hold sum of nodes on path 
    // from root to this node 
    curr_sum = curr_sum + node->data; 
  
    // If this is a leaf node and path to this node has 
    // maximum sum so far, then make this node target_leaf 
    if (node->left == NULL && node->right == NULL) { 
        if (curr_sum > *max_sum) { 
            *max_sum = curr_sum; 
            
        } 
    } 
  
    // If this is not a leaf node, then recur down 
    // to find the target_leaf 
    getTargetLeaf(node->left, max_sum, curr_sum); 
    getTargetLeaf(node->right, max_sum, curr_sum); 


}

int maxSum(struct node *root)
{
 if(root == NULL)
   return 0;
 
 int max_sum = INT_MIN;
 getTargetLeaf(root,&max_sum,0);
 
return max_sum;
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
 int path[100];
 int max;
// int len = printPathRecur(root,path,0);

 printf("MaxSum is %d\n",maxSum(root));
 return 0;
}
