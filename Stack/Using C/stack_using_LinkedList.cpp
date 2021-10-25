//Stack using linked list
#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void peep();//Use to access top element
void display();

struct node{
    int info;
    struct  node *next;
};
struct node *top=NULL;
int main(){
   int choice;
   while(1){
   printf("Enter your choice 0.exit 1.push 2.pop 3.display 4.Peep\n");
   scanf("%d",&choice);
   switch(choice){
       case 0: exit(1);break;
       case 1: push();break;
       case 2: pop();break;
       case 3: display();break;
       case 4: peep();break;
       default: printf("Press right key\n");
   }
  }
    return 0;
}

void push(){
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("Enter the element\n");
   scanf("%d",&temp->info);
   temp->next=NULL;
   if(top==NULL){
       top=temp;
   }
   else{
       temp->next=top;
       top=temp;
   }
}

void pop(){
    struct node *ptr;
    ptr=top;
    top=top->next;
    free(ptr);
    printf("Top element has been popped\n");
}

void peep(){
    printf("Pepped element is %d\n",top->info);
}

void display(){
    struct node *ptr;
    ptr=top;
    while(ptr!=NULL){
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
    printf("\n");
}
