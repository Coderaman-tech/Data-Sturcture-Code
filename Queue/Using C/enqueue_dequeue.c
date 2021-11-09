#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int rear=-1;
int front=-1;
int queue[MAX];

void enqueue(){
    if(rear==MAX-1)
    printf("Queue is full\n");
    else{
    if(front==-1)
    front=0;
    int element;
    rear=rear+1;
    printf("Enter the element\n");
    scanf("%d",&element);
    queue[rear]=element;
    }
}

void dequeue(){
    if(front==-1 || front>rear){
        printf("Queue is empty\n");
    }
    else{
    printf("Dequeue element is %d\n",queue[front]);
    front=front+1;
    }
}

void display(){
    int i;
    if(front==-1 || front>rear){
        printf("Queue is empty\n");
    }
    else{
        for(i=front;i<=rear;i++)
        printf("%d ",queue[i]);
        printf("\n");
    }
}
int main()
{
    int choice;
    while(1){
        printf("Enter your choice 1.enqueue 2.dequeue 3.display 0.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
         case 0:exit(1);break;
         case 1:enqueue();break;
         case 2:dequeue();break;
         case 3:display();break;
         default:printf("Press right key\n");
        }
    }
     return 0;
}
