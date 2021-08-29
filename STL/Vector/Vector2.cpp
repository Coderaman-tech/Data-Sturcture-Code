#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int>v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
   vector<int>v(10);//size of vector is 10
   v.push_back(7);//O(1) now its size is 11 with 7 it's last element
   //vector<int>v(5,3); means 5 size vector and it's all element is 3
   v.pop_back();//0(1) it remove the last element of vector
   vector<int>v2=v;//O(n) copy of v vector
   v2.push_back(5);
   printVec(v);
   printVec(v2);
}
