//Program to insert new node at tail or head position
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

void insertAthead(node *&head,int val){
   node *temp=new node(val);
   head->prev=temp;
   temp->next=head;
   head=temp;
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
   insertAtTail(head,5);
   display(head);
   insertAthead(head,100);
   display(head);
}
/*
Output
1 2 3 4 
1 2 3 4 5 
100 1 2 3 4 5
*/
