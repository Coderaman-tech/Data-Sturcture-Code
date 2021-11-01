//Find intersection of two linked list
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
//Make intersection 
void intersect(node *&head1,node *&head2,int pos){
   node *temp1=head1;
   pos--;
   while(pos--){
      temp1=temp1->next;
   }
   node *temp2=head2;
   while(temp2->next!=NULL){
      temp2=temp2->next;
   }
   temp2->next=temp1;
}

//Find intersection of two linked list
int intersection(node *&head1,node *&head2){
  int l1=length(head1);
  int l2=length(head2);
  int d=0;
  node *ptr1,*ptr2;
  if(l1>l2){
     d=l1-l2;
     ptr1=head1;
     ptr2=head2;
  }
  else{
     d=l2-l1;
     ptr1=head2;
     ptr2=head1;
  }
    
    while(d){
       ptr1=ptr1->next;
       if(ptr1==NULL){
          return -1;
       }
       d--;
    }

    while(ptr1!=NULL && ptr2!=NULL){

       if(ptr1==ptr2){
          return ptr1->data;
       }
       ptr1=ptr1->next;
       ptr2=ptr2->next;
    }
   return -1;
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
        cout<<ptr->data<<"->";
        ptr=ptr->next;
     }
     cout<<"NULL"; 
     cout<<endl;
}

int main(){
   node *head1=NULL,*head2=NULL;
   insertAtTail(head1,1);
   insertAtTail(head1,2);
   insertAtTail(head1,3);
   insertAtTail(head1,4);
   insertAtTail(head1,5);
   insertAtTail(head1,6);
   insertAtTail(head2,9);
   insertAtTail(head2,10);

   intersect(head1,head2,3);
   display(head1);
   display(head2);
   cout<<intersection(head1,head2);
}
/*
Output
1->2->3->4->5->6->NULL
9->10->3->4->5->6->NULL
3
*/
