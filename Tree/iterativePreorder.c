#include<stdio.h>
#include<stdlib.h>

//#define NODEALLOC (struct node *)malloc(sizeof(struct node))

struct Stack
{
 int top;
 int item;
 int capacity;
 int *array;
};


struct node
{
 int data;
 struct node *left;
 struct node *right;
};

struct Stack *createStack(unsigned capacity)
{
 struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
 stack->capacity = capacity;
 stack->top = -1;
 stack->array = (int*)malloc(stack->capacity*sizeof(int));
 return stack;
}


struct node* newNode(int data) 
{ 
    struct node* node = (struct node*)malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = node->right = NULL; 
  
    return node; 
} 

int isFull(struct Stack* stack)
{
	return stack->top == stack->capacity-1;
}


void push(struct Stack *stack, int item)
{
	 if(isFull(stack))
	 {
		//printf("Stack Overflow\n");
		return;
 	}
	 else
  	{
		stack->array[++stack->top] = item;
		//printf("%d is push on to the stack\n",item);
  	}
}


int isEmpty(struct Stack *stack)
{
	return stack->top == -1;
}


int pop(struct Stack *stack)
{
   //int item;
 	if(isEmpty(stack))
 	{
		//printf("Stack underflows\n");
		return;
 	}
 	else
 	{
  	int item = stack->array[stack->top--];
	return item;
  	//printf("%d is removed from stack\n",item);
 	}
 
}


int isTop(struct Stack *stack)
{
	printf("Top element of stack is %d\n",stack->array[stack->top]);
}


void deleteStack(struct Stack *stack)
{
 if(stack)
 {
	if(stack->array)
		free(stack->array);
	else
		free(stack);
 }
}


void preorder(struct node *root)
{
 struct Stack *stack = createStack(8);
 while(1)
 {
	while(root)
	{
		printf("%d",root->data);
		push(stack,root->data);
		root = root->left;
	}
	if(isEmpty(stack))
		break;

	root = pop(stack);
	root = root->right;
 }
 deleteStack(stack);
}



int main()
{
 struct node* root = newNode(20);
	//printf("%d\n",root->data); 
    root->left = newNode(8); 
    root->left->left = newNode(4); 
    root->left->right = newNode(12); 
    root->left->right->left = newNode(10); 
    root->left->right->right = newNode(14); 
    root->right = newNode(22); 
    root->right->right = newNode(25); 
    preorder(root); 
 return 0;
}



