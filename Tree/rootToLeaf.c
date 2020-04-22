#include<stdio.h>
#include<stdlib.h>

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


void printArray(int inst[],int len)
{
 for(int i=0;i<len;i++)
	printf("%d ",inst[i]);

 printf("\n");
}

struct node *printPathRecur(struct node *root,int path[],int pathlen)
{
 if(root == NULL)
   return;
 path[pathlen] = root->data;
 //printf("%d ",root->data);
 pathlen++;
 
 if(root->left == NULL && root->right == NULL)
 	printArray(path,pathlen);
   
 else{
	printPathRecur(root->left,path,pathlen);
	printPathRecur(root->right,path,pathlen);
 }

}

int main()
{
 struct node *root = newNode(10);
 root->left = newNode(3);
 //root->left->left = newNode(9);
 root->left->right = newNode(8);
 root->right = newNode(4);
 //root->right->left = newNode(7);
 root->right->right = newNode(5);
 int path[100];
 printPathRecur(root,path,0);

 return 0;
}
