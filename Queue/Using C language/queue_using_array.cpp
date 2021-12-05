//Queue using array
#include <iostream>
using namespace std;
#define n 20

class queue{
     int *arr;
     int front,rear;
     public:
     queue(){
         arr=new int [n];
         front=-1;
         rear=-1;
     }
     void enqueue(int x){
         if(rear==n-1){
             cout<<"Queue is full"<<"\n";
             return;
         }
         rear++;
         arr[rear]=x;
         if(front==-1){
             front=0;
         }
     }
     void dequeue(){
         if(front==-1 || front>rear){
             cout<<"No element in queue"<<"\n";
             return;
         }
         front++;
     }

     int peek(){
          if(front==-1 || front>rear){
             cout<<"No element in queue"<<"\n";
             return -1;
         }
         return arr[front];
     }

     bool empty(){
         if(front==-1 || front>rear){
             return true;
         }
         return false;
     }

     void display(){
         if(front==-1 || front>rear){
             cout<<"No element in queue"<<"\n";
             return;
         }
         for(int i=front;i<=rear;i++){
             cout<<arr[i]<<" ";
         }
         cout<<endl;
     }
};
int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.display();
  cout<<q.peek()<<endl;
    q.dequeue();
    q.display();
    return 0;
}
/*
Output
1 2 3 4 
1
2 3 4
*/
