#include <bits/stdc++.h>
using namespace std;

//for printing vector
void printVec(vector<int>v){
    cout<<"size: "<<v.size()<<endl;
    //v.size()-> 0(1)
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    //vector is like dynamically array
    vector<int>v;
    int n;
    cin>>n;
    //taking input
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        printVec(v);
        //adding element at last index of current size
        v.push_back(x);//0(1)
    }
  printVec(v);
  
}
/*
INPUT
5
1 2 3 4 5

OUTPUT
size: 0

size: 1
1 
size: 2
1 2 
size: 3
1 2 3 
size: 4
1 2 3 4 
size: 5
1 2 3 4 5
*/
