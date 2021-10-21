//Append Last k nodes of a linked list
#include<bits/stdc++.h>
using namespace std;

class node{
      public:
      int data;
      node * next;
      node(int val){
         data=val;
         next=NULL;
      }
};

int length(node *head){
   int l=0;
   node *ptr=head;
   while(ptr!=NULL){
      ptr=ptr->next;
      l++;
   }
   return l;
}

node *append_k_nodes(node *&head,int k){
      node *tail=head;
      node*newtail,*newhead;
      int l=length(head);
      int count=1;
      while(tail->next!=NULL){
         if(l-k==count){
            newtail=tail;
         }
         if(l-k+1==count){
            newhead=tail;
         }
         count++;
         tail=tail->next;
      }
        newtail->next=NULL;
        tail->next=head;
        return newhead;
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
   insertAtTail(head,5);
   insertAtTail(head,6);

   display(head);
   node *newhead=append_k_nodes(head,3);
   display(newhead);
}
/*
Output
1 2 3 4 5 6 
4 5 6 1 2 3
*/
