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

node *reversek(node *&head,int k){
   node *ptr=head;
   int count=0;
   //Check k nodes is less or equal of total nodes of LinkedList
   while(ptr!=NULL){
      count++;
      ptr=ptr->next;
   }
   if(count<k){
      return head;
   }
   count=0;
   node *currptr=head;
   node *prevptr=NULL;
   node *nextptr;
   while(currptr!=NULL && count<k){
      nextptr=currptr->next;
      currptr->next=prevptr;
      prevptr=currptr;
      currptr=nextptr;
      count++;
   }
   //Check that node is end or not tll yet
   if(nextptr!=NULL){
      head->next=reversek(nextptr,k);
   }
   return prevptr;
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
     node *newhead=reversek(head,2);
     display(newhead);
  
}
/* Output
1->2->3->4->5->6->NULL
2->1->4->3->6->5->NULL
*/
