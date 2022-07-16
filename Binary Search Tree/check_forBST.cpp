//Check for BST

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


bool isBST(Node *root,Node *min=NULL,Node *max=NULL){
    
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->data <= min->data){
        return false;
    }
    if(max!=NULL && root->data >= max->data){
        return false;
    }
    bool leftValid=isBST(root->left,min,root);
    bool rightValid=isBST(root->right,root,max);

    return leftValid and rightValid;
}


int main(){
  Node *root=new Node(9);
  root->left=new Node(2);
  root->right=new Node(13);
  
  if(isBST(root,NULL,NULL)){
    cout<<"valid BST"<<"\n";
  }
  else
  cout<<"invalid BST"<<"\n";
}
/* 

    9
   / \
   2  13

TC-O(n)

Output
valid BST
*/
