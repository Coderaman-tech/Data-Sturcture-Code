//Stack using Linked List

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;

void push(struct node *&top){
    struct node *temp,*ptr;
    temp=new node();
    int element;
    cout<<"Enter the data"<<endl;
    cin>>element;
    temp->data=element;
    temp->next=NULL;
    if(top==NULL){
        top=temp;
        return;
    }
   temp->next=top;
   top=temp;
}

void pop(struct node *&top){
    if(top==NULL){
        cout<<"Stack underflow"<<endl;
    }
    cout<<"Popped element is:"<<top->data<<endl;
    top=top->next;
}

void display(struct node *top){
    if(top==NULL){
        cout<<"Stack is empty"<<endl;
    }
    struct node *ptr=top;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main(){
    int choice;
    while(1){
        cout<<"Enter your choice 0.exit 1.push 2.pop 3.display"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 0:exit(1); break;
        case 1:push(top);break;
        case 2:pop(top);break;
        case 3:display(top);break;
        default:cout<<"Press right key"<<endl;break;
        }
    }
    return 0;
}
