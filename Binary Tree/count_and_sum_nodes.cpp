//Find the number of nodes and sum of nodes in binary tree

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


int countNodes(Node *root){
    if(root==NULL){
        return 0;
    }

    return countNodes(root->left)+countNodes(root->right)+1;
}

int sumNodes(Node *root){
    if(root==NULL){
        return 0;
    }
    return sumNodes(root->left)+sumNodes(root->right)+root->data;
}

int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
   
   cout<<"Total number of nodes is "<<countNodes(root)<<"\n";
   cout<<"Total sum of nodes is "<<sumNodes(root);
}
/* 
         1
        / \
        2  3
       / \ / \
       4 5 6  7  
Output
Total number of nodes is 7
Total sum of nodes is 28 
*/
