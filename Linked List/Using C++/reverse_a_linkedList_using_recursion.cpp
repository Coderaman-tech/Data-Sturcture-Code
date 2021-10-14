//Reverse a linked list using recursion
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

node *reverseRecursive(node *&head){

   //Base case
   if(head==NULL ||  head->next==NULL){
      return head;
   }
      node *newhead=reverseRecursive(head->next);
      head->next->next=head;
      head->next=NULL;
      return newhead;
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
     node *newhead=reverseRecursive(head);
     display(newhead);
  
}
/* Output
1 2 3
3 2 1
*/
