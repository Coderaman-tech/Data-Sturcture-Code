//Merge sorted Linked list in sorted manner
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
//By traversing
node *merge_by_traversing(node *&head1,node *&head2){
   node *p1=head1;
   node *p2=head2;
   node *dummyNode=new node(-1);
   node *p3=dummyNode;
   while(p1!=NULL && p2!=NULL){
      if(p1->data<p2->data){
         p3->next=p1;
         p1=p1->next;
      }
      else{
         p3->next=p2;
         p2=p2->next;
      }
      p3=p3->next;
   }

   while(p1!=NULL){
      p3->next=p1;
      p1=p1->next;
      p3=p3->next;
   }
   while(p2!=NULL){
      p3->next=p2;
      p2=p2->next;
      p3=p3->next;
   }
   return dummyNode->next;
}

//By recursion

node *mergeRecursive(node *&head1,node *&head2){
   if(head1==NULL){
      return head2;
   }
   if(head2==NULL){
      return head1;
   }
   node *result;
   if(head1->data<head2->data){
      result=head1;
      result->next=mergeRecursive(head1->next,head2);
   }
   else{
      result=head2;
      result->next=mergeRecursive(head1,head2->next);
   }
   return result;
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
   int i;
   node *head1=NULL,*head2=NULL;
   int arr1[]={1,4,5,7};
   int arr2[]={2,3,6};
   for(i=0;i<4;i++){
      insertAtTail(head1,arr1[i]);
   }
    for(i=0;i<3;i++){
       insertAtTail(head2,arr2[i]);
    }
   display(head1);
   display(head2);
   node *newhead=merge_by_traversing(head1,head2);
   cout<<"By iterative way"<<endl;
   display(newhead);
   cout<<"By recursion way"<<endl;
  node *newhead1=mergeRecursive(head1,head2);
   display(newhead1);
}
/*
Output
1->4->5->7->NULL
2->3->6->NULL
By iterative way
1->2->3->4->5->6->7->NULL
By recursion way
1->2->3->4->5->6->7->NULL
*/
