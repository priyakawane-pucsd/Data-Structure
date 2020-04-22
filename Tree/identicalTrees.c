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


int check(struct node* root1,struct node* root2) 
{ 
	if(root1==NULL && root2==NULL)
		return 1;
	if(root1!=NULL && root2!=NULL)
	{
		if(root1->data==root2->data && check(root1->left,root2->left) && check(root1->right,root2->right))
		{
			return 1;
		}
	}

	return 0;
} 



int main()
{
    struct node* root1 = newNode(1);
	//printf("%d\n",root->data); 
    root1->left = newNode(2); 
    root1->left->left = newNode(4); 
    root1->left->right = newNode(5); 
    //root->left->right->left = newNode(10); 
    //root->left->right->right = newNode(14); 
    root1->right = newNode(3); 
	//root->right->left = newNode(9);
    //root->right->right = newNode(25); 
  

	struct node* root2 = newNode(1);
	//printf("%d\n",root->data); 
    root2->left = newNode(2); 
    root2->left->left = newNode(4); 
    root2->left->right = newNode(5); 
    //root->left->right->left = newNode(10); 
    //root->left->right->right = newNode(14); 
    root2->right = newNode(13); 
	//root->right->left = newNode(9);
    //root->right->right = newNode(25); 

    int val = check(root1,root2);
	if(val == 0)
	{
		printf("Not identical\n");
	}
	else
	{
		printf("identical\n");
	}
    return 0; 

}
