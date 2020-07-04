/*
    Student detail queue for students with even roll number using structures and queue functions
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Queue // structure queue
{ 
    int roll[10];
    char *name[10];
    int front,rear;
}Queue;

void initialize(Queue* q)
{
    q->front=0;
    q->rear=0;
}

void enqueue(Queue* q,int x)
{
    q->rear =x+1; //increament rear index

}

int isEmpty(Queue* q)
{ 
    return q->front==q->rear;
}

int even_std(Queue* q,int j,int x)
{
    q->roll[j]=x;
    printf("\n Enter Name: ");
    scanf(" %[^\n]s",q->name[j] =(char *)malloc((100))); //to accept string 
    enqueue(q,j); // sending it into an array through enqueue
}

void print(Queue* q)
{    
    for(int i=q->front;i<q->rear;i++)
    {
        printf("\nRoll Number: %d ",q->roll[i]);
        printf("\nName :%s\n",q->name[i]);

    }
    printf("\nfront:%d  rear: %d",q->front,q->rear);
}

int main()
{
    int x,j=0;
    Queue* q1=(Queue*)malloc(sizeof(Queue));
    initialize(q1);

    for(int i=0;i<10;i++)
    { 
        printf("\nEnter Roll Number:");
        scanf("%d",&x);
        if(x%2==0) //condition only to accept even roll numbers
        {
            even_std(q1,j,x);  //sending it to even_std function for accepting 
            j=j+1; //index number 
        }
    }
    printf("\n");
    print(q1); //calling print function
}