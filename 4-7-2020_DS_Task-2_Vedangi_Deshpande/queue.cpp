
#include<stdio.h>
#include<stdio.h>

typedef struct queue
{
    int arr[10];
    int front,rear;
}queue;


int main()
{
    Queue* q1=(Queue*)malloc(sizeof(Queue));
    initialize (q1);
    enqueue(q1,10);
    enqueue(q1,20);
    enqueue(q1,30);
    enqueue(q1,40);
  print(q1);

}
void intialize(queue* q){
    q->front=0;
    q->rear=0;
}

void enqueue(queue *q, int x){
    q->arr[q->rear++]=x;
}


int dequeue(queue *q){
    return q->arr[q->front++];
}

int isEmpty(queue *q){
    return q->front==q->rear;
}
