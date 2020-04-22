#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
/*
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


int maxPossibleSum(struct node *root)
{

 
}

int main()
{
    struct node* root = newNode(1);
	//printf("%d\n",root->data); 
    root->left = newNode(2); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right = newNode(3); 
	root->right->left = newNode(7); 
    root->right->right = newNode(6); 
    maxPossibleSum(root); 
  
    return 0; 

}*/



//Pseudo code :
1. Traverse left side until it become null and push root->data to stack ie 1,2,4 make addition of them is 7

2. Pop out the element from stack is 4 and goto right side of node 2 ie 5 it's path then 1,2,5 addition is 8... compare 7 and 8 put max = 8

3. pop out 5 from stack ...now we have 1,2 in stack now 2->right is done so pop out 2 from stack now ew have 1 in stack

4. Traverse right side of (we have 1 in stack) ie 3 and check it's right and push it ....now we have 1,3,7 in stack make sum is 11 compare  with max variable(ie 8) and now max is become 11.

5. again pop out 7 from stack goto right of 3 node and into stack is 1,3,6 and make addition of them is 10

6. compare 10 and 11 now max is 11

7. return 11 to final answer.
