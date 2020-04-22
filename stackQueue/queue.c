#include<stdio.h>
#include<stdlib.h>

struct Queue
{
 int rear,front,size;
 int capacity;
 int *array;
 //int data;
};

struct Queue *CreateQ(int capacity)
{
 struct Queue *queue = (struct Queue*)malloc(sizeof(struct Queue));
 queue->capacity = capacity;
 //queue->data = data;
 queue->front = queue->size = 0;
 queue->rear = capacity - 1;
 queue->array = (int *)malloc(queue->capacity*sizeof(int));
 return queue;
}

int isFull(struct Queue *queue)
{
 return queue->size == queue->capacity;
}

int isEmpty(struct Queue *queue)
{
 return queue->size == 0;
}

void enqueue(struct Queue *queue,int data)
{
 if(isFull(queue))
   printf("\nQueue is Full\n");
else
   queue->rear = (queue->rear+1)%queue->capacity; 
   queue->array[queue->rear] = data;
   queue->size = queue->size+1;
   printf("\n%d enqueue to the queue\n",data);
}


int dequeue(struct Queue *queue)
{
 int data =0;
 if(isEmpty(queue))
   printf("\nQueue is Empty\n");
else
   data = queue->array[queue->front];
   queue->front = (queue->front+1)%queue->capacity; 
   queue->size = queue->size-1;
    return data;
}

int Front(struct Queue *queue)
{
 if(isEmpty(queue))
   return;
 else
    return queue->array[queue->front];

}

int Rear(struct Queue *queue)
{
 if(isEmpty(queue))
   return;
 else
    return queue->array[queue->rear];

}

int DeleteQueue(struct Queue *queue)
{
 if(queue) 
 {
  if(queue->array)
   free(queue->array);
  free(queue);
 }
}


int main()
{
 struct Queue *queue = CreateQ(10);
 enqueue(queue,10);
 enqueue(queue,20);
 enqueue(queue,30);
 enqueue(queue,40);
 printf("\n%d dequeue from the Q.\n",dequeue(queue));
 printf("\nFront element the Q is %d\n",Front(queue));
 printf("\nRear element the Q is %d\n",Rear(queue));
 printf("\nDeleting Queue---\n");
 DeleteQueue(queue);
 enqueue(queue,10);
 return 0;
}

