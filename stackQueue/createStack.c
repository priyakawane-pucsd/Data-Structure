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


struct Stack *createStack(unsigned capacity)
{
 struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
 stack->capacity = capacity;
 stack->top = -1;
 stack->array = (int*)malloc(stack->capacity*sizeof(int));
 return stack;
}


int isFull(struct Stack* stack)
{
	return stack->top == stack->capacity-1;
}


void push(struct Stack *stack, int item)
{
	 if(isFull(stack))
	 {
		printf("Stack Overflow\n");
		//return;
 	}
	 else
  	{
		stack->array[++stack->top] = item;
		printf("%d is push on to the stack\n",item);
  	}
}


int isEmpty(struct Stack *stack)
{
	return stack->top == -1;
}


int pop(struct Stack *stack)
{
 	if(isEmpty(stack))
 	{
		printf("Stack underflows\n");
 	}
 	else
 	{
  	int item = stack->array[stack->top--];
  	printf("%d is removed from stack\n",item);
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


int main()
{
 struct Stack *stack = createStack(2);
 push(stack,10);
 push(stack,20);
 push(stack,30);
 pop(stack);
 isTop(stack);
 deleteStack(stack);
 //isTop(stack);
 //pop(stack);
 return 0;
}



/*
#include<stdio.h>
#include<stdlib.h>
struct Stack
{
 int top;
 int data;
 int capacity;
 int *array;
};


struct Stack *createStack(int capacity)
{
 struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
 stack->capacity = capacity;
 stack->top = -1;
 stack->array = (int *)malloc(stack->capacity*sizeof(int));
 return stack;
}

int isFull(struct Stack *stack)
{
 return stack->top == stack->capacity-1;
}

int isEmpty(struct Stack *stack)
{
  return stack->top == -1;
}

int push(struct Stack *stack,int data)
{
 if(isFull(stack))
 {
  printf("\nStack overflows\n");
 }
 else
 {
  stack->array[++stack->top] = data;
  printf("\n%d pushed on the stack\n",data);
 }
}

int pop(struct Stack *stack)
{
 
 if(isEmpty(stack))
 {
   printf("\nSatck empty\n");
 }
 else
 {
  return stack->array[stack->top--];
  //printf("%d poped from the stack\n",data);
 }
}


void DeleteStack(struct Stack *stack)
{
 printf("\nhere to make stack free\n");
 if(stack)
 {
  if(stack->array)
    free(stack->array);
   free(stack);
 }
}*/

