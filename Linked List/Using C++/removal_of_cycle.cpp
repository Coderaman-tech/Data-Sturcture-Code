//Program to remove cycle in linked lisdt
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
//Firstly make a cycle
void makeCycle(node *&head,int pos){
   node *temp=head;
   node *startNode;
   int count=1;
   while(temp->next!=NULL){
      if(count==pos)
      startNode=temp;
      temp=temp->next;
      count++;
   }
   temp->next=startNode;
}
//Remove of cycle
void removeCycle(node *&head){
   node *slow=head;
   node *fast=head;
   do{
      slow=slow->next;
      fast=fast->next->next;
   }while(slow!=fast);
   fast=head;
   while(slow->next!=fast->next){
      slow=slow->next;
      fast=fast->next;
   }
   slow->next=NULL;
}
void display(node *head){
   node *temp=head;
   while(temp!=NULL){
      cout<<temp->data<<"->";
      temp=temp->next;
   }
   cout<<"NULL";
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
    makeCycle(head,3);
    removeCycle(head);
    display(head);
}
/* Output
1->2->3->4->5->6->NULL
1->2->3->4->5->6->NULL
*/
