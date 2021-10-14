#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insert_at_k();
void delete_at_k();
void deleteAthead();
void delete_at_end();
void insert_at_head();
struct node{
    int info;
    struct node *next;
};
struct node *head;

int main(){
  int choice;
  while(1){
      printf("\nEnter your choice 0.exit 1.create 2.display 3.insert at kth position 4.delete at kth position 5.delete at end 6.insert_at_head:");
      scanf("%d",&choice);
      switch(choice){
          case 0:exit(1);break;
          case 1:create();break;
          case 2:display();break;
          case 3:insert_at_k();break;
          case 4:delete_at_k();break;
          case 5:delete_at_end();break;
          case 6:insert_at_head();break;
          default:printf("\nPress right key");
      }
  }
}
void create(){
    struct node *temp,*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}

void display(){
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
}

void insert_at_head(){
    struct node *ptr,*temp;
    ptr=head;
     temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data\n");
    scanf("%d",&temp->info);
    temp->next=head;
    head=temp;
    printf("\nInsertion at first node is complete");

}

void insert_at_k(){
    struct node*ptr,*temp;
    ptr=head;
    int pos;
    printf("\nEnter your position:");
    scanf("%d",&pos);
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->info);
    temp->next=NULL;
   int i=1;
    while(i<pos-1){
       ptr=ptr->next;
       i++;
    }
    temp->next=ptr->next;
    ptr->next=temp;
    printf("\n Insertion is complete");
}

void deleteAthead(){
   struct node*todelete=head;
   head=head->next;
   free(todelete);
}

void delete_at_end(){
     struct node *ptr;
     ptr=head;
     while(ptr->next->next!=NULL){
         ptr=ptr->next;
     }
      struct node*deleteAtend=ptr->next;
      free(deleteAtend);
     ptr->next=NULL;
     printf("\nLast node has been deleted");
}
void delete_at_k(){
    struct node*ptr,*temp;
    ptr=head;
    int pos;
    printf("\nEnter your position:");
    scanf("%d",&pos);
    if(head==NULL){
        printf("\nNo node is present");
        return;
    }
    if(pos==1 || head->next==NULL){
        deleteAthead();
    }
    int i=1;
    while(i<pos-1){
        ptr=ptr->next;
    }
    struct node *todelete=ptr->next;
    ptr->next=ptr->next->next;
    free(todelete);
    printf("\nDeletion is complete");
}
