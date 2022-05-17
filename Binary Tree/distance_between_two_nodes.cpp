//Find distance between two nodes in a binary tree
#include<iostream>
#include<vector>
using namespace std;

struct Node{
   int data;
   Node *left,*right;
   Node(int val){
      data=val;
      left=NULL;
      right=NULL;
   }
};

Node *LCA(Node *root,int n1,int n2){
   if(root==NULL){
      return NULL;
   }
   if(root->data==n1|| root->data==n2){
      return root;
   }

   Node *leftLCA=LCA(root->left,n1,n2);
   Node *rightLCA=LCA(root->right,n1,n2);

   if(leftLCA && rightLCA){
      return root;
   }
   if(leftLCA!=NULL){
      return leftLCA;
   }
   return rightLCA;

}

int findDist(Node *root,int k,int dist){
   if(root==NULL){
      return -1;
   }
   if(root->data==k){
      return dist;
   }
   int left=findDist(root->left,k,dist+1);
   if(left!=-1){
      return left;
   }
   return findDist(root->right,k,dist+1);
}

int distBtwNodes(Node *root,int n1,int n2){
   Node *lca=LCA(root,n1,n2);
   int d1=findDist(lca,n1,0);
   int d2=findDist(lca,n2,0);
   return d1+d2;
}

/*
        1
       / \
       2  3
      /  / \
     4   5  6
         /
         7

*/
int main(){
   Node *root=new Node(1);
   root->left=new Node(2);
   root->right=new Node(3);
   root->left->left=new Node(4);
   root->right->left=new Node(5);
   root->right->right=new Node(6);
   root->right->left->left=new Node(7);

   cout<<distBtwNodes(root,4,5)<<"\n";
  
}

/*
OUTPUT- 4
*/
