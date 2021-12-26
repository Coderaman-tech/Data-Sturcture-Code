#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void preorder(struct Node *root){
    struct Node *temp=root;
    if(temp==NULL){
        return;
    }
    cout<<temp->data<<" ";
    preorder(temp->left);
    preorder(temp->right);
}

void inorder(struct Node *root){
    struct Node *temp=root;
    if(temp==NULL){
        return;
    }
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
}

void postorder(struct Node *root){
    struct Node *temp=root;
    if(temp==NULL){
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
     cout<<temp->data<<" ";
}

int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<"Preorder traversel is"<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Inorder traversel is"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"Postorder traversel is"<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}
/*
Output
Preorder traversel is 
1 2 4 5 3 6 7         
Inorder traversel is  
4 2 5 1 6 3 7         
Postorder traversel is
4 5 2 6 7 3 1        
*/
