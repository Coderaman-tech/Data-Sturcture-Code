//Queue using linked list
#include<iostream>
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

class queue{
  node *front;
  node *rear;
  public:
  queue(){
    front=NULL;
    rear=NULL;
  }
   
   void push(int x){
     node *n=new node(x);
     if(front==NULL){
       front=n;
       rear=n;
       return;
     }
    rear->next=n;
    rear=n;
   }
   void pop(){
     if(front==NULL){
       cout<<"Queue underflow"<<endl;
        return;     
     }
     node *todelete=front;
     front=front->next;
     delete todelete;
   }

   int peek(){
     if(front==NULL){
       cout<<"Queue underflow"<<endl;
        return -1;     
     }
     return front->data;
   }
   
   bool empty(){
     if(front==NULL){
       return true;
     }
     return false;
   }
};

int main(){
  queue q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
cout<<q.peek()<<endl;
q.pop();
cout<<q.peek()<<endl;
q.pop();
cout<<q.peek()<<endl;
q.pop();
cout<<q.peek()<<endl;
q.pop();
cout<<q.peek()<<endl;
return 0;
}
/*
Output is

1
2
3
4
Queue underflow
-1
*/
