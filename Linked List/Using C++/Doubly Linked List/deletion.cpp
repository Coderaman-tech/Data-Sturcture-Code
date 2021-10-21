#include<bits/stdc++.h>
using namespace std;

class node{
      public:
      int data;
      node * next;
      node * prev;
      node(int val){
         data=val;
         next=NULL;
         prev=NULL;
      }
};

void deleteAtHead(node *&head){
   node *todelete=head;
   head=head->next;
   head->prev=NULL;
   delete todelete;
}

void deletion(node *&head,int pos){
    int count=1;
   if(pos==1){
      deleteAtHead(head);
      return;
   }
   node *ptr=head;
   while(ptr!=NULL && count!=pos){
      ptr=ptr->next;
      count++;
   }
   ptr->prev->next=ptr->next;
   if(ptr->next!=NULL){ //For last node condition
   ptr->next->prev=ptr->prev;
   }
   delete ptr;
}


void insertAtTail(node *&head,int val){
   node *temp=new node(val);
   node *ptr;
   ptr=head;
   if(head==NULL){
      head=temp;
   }
   else{
   while(ptr->next!=NULL){
      ptr=ptr->next;
   }
   ptr->next=temp;
   temp->prev=ptr;
   }
}

void display(node *head){
     node *ptr=head;
     while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
     }
     cout<<endl;
}

int main(){
   node *head=NULL;
   insertAtTail(head,1);
   insertAtTail(head,2);
   insertAtTail(head,3);
   insertAtTail(head,4);
   display(head);
   deletion(head,2);
   display(head);  
   deletion(head,1);//deletion at first node
   display(head); 
   deletion(head,2);//deletion at last node
   display(head); 
}
/*
Output
1 2 3 4 
1 3 4 
3 4 
3
*/
