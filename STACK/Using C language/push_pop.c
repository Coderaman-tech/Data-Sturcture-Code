//Stack using array
#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int top=-1;
int stack[MAX];
void push();
void pop();
void display();

int main(){
   int choice;
   while(1){
   printf("Enter your choice 0.exit 1.push 2.pop 3.display\n");
   scanf("%d",&choice);
   switch(choice){
       case 0: exit(1);break;
       case 1: push();break;
       case 2: pop();break;
       case 3: display();break;
       default: printf("Press right key\n");
   }
  }
}

void push(){
    if(top==MAX-1){
        printf("Stack overflow\n");
    }
    else{
        top=top+1;
        int element;
        printf("Enter the element:\n");
        scanf("%d",&element);
         stack[top]=element;
    }
}

void pop(){
    if(top==-1){
    printf("Stack underflow\n");
    }
    else{
        printf("Popped element is:%d\n",stack[top]);
        top-=1;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        for(i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
