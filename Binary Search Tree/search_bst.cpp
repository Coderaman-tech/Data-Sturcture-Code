//Searching in BST

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

Node* searchBST(Node *root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key)
     return searchBST(root->left,key);

    if(root->data<key)    
    return searchBST(root->right,key);
}

int main(){
    //Already make BST
    Node *root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    
    if(searchBST(root,5)==NULL)
    cout<<"Key doesn't exist"<<"\n";
    else
    cout<<"Key exist\n"<<"\n";
    return 0;
}
/* 
         4
        / \
        2  5
       / \  \
       1 3   6  
Output
Key exist
Time complexity:O(log n)
*/
