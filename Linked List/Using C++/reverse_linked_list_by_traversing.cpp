//Reverse linked list by traversing each node one by one
#include <bits/stdc++.h>
using namespace std;

class node{
   public:
     int data;
     node *next;
     node(int val){
        data=val;
        next=NULL;
     }
};
void insertAtTail(node *&head,int val){
   node *n=new node(val);
   if(head==NULL){
      head=n;
      return;
   }
    node *temp=head;
    while(temp->next!=NULL){
       temp=temp->next;
    }
    temp->next=n;
}

node *reverse(node *&head){
   node *prevptr=NULL;
   node *currptr=head;
   node *nextptr;
   while(currptr!=NULL){
      nextptr=currptr->next;
      currptr->next=prevptr;
      prevptr=currptr;
      currptr=nextptr;
   }
   head=prevptr;
   return head;
}

void display(node *head){
   node *temp=head;
   while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;
   }
      cout<<endl;
}
int main(){
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
     display(head);
     reverse(head);
     display(head);
  
}
/* Output
1 2 3
3 2 1
*/
