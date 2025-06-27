#include <stdio.h>
#include <stdlib.h>

typedef struct queue{
 int size;
 int rear;
 int front;
 int *q;
}q_t;

void create(q_t * Q,int size);
void dequeue(q_t * Q,int *x);
void enqueue(q_t * Q,int x);
void display(q_t * Q);

int main(){
 int de;
 q_t q1;
 create(&q1,5);
 enqueue(&q1,5);
 enqueue(&q1,5);
 enqueue(&q1,5);
 dequeue(&q1,&de);
 display(&q1);
 return 0;
}

void create(q_t * Q,int size){
 Q->size = size;
 Q->q = (int *)malloc(Q->size*sizeof(int));
 Q->rear = -1;
 Q->front = -1;
}

void enqueue(q_t * Q,int x){
 if(Q == NULL){
  return ;
 }
 else{
  if(Q->rear == Q->size - 1){
   printf("the queue is full ");
  }
  else{
   Q->rear++;
   Q->q[Q->rear] = x;
  }
 }
}

void dequeue(q_t * Q,int *x){
 if(Q == NULL || x == NULL){
  return;
 }
 else{
  if(Q->front == Q->rear){
   printf("the queue is empty ");
  }
  else{
   Q->front++;
   *x = Q->q[Q->front];
  }
 }
}

void display(q_t *Q){
 if(Q == NULL){
  return;
 }
 else{
  for(int i;i<= Q->rear;i++){
  printf("%d  ",Q->q[i]);
  }
 }
}