#include<iostream>
#include<vector>
#include<bits/stdc++.h> //for STL
using namespace std;
int main(){

    //vector<data_type>variable_name;
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    //1st method to print vector
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";  //1 2 3
    cout<<endl;
    //2nd method to print vector
     //By iterator
     vector<int>::iterator it;
     for(it=v.begin();it!=v.end();it++){
         cout<<*it<<" "; //1 2 3
     }
     cout<<endl;

     //3rd method and best method
     for(auto element: v){
         cout<<element<<" ";  // 1 2 3
     }
     cout<<endl;
     v.pop_back(); //use to remove element form end of the array
     // 1 2
     vector<int>v2(3,50);
     //50 50 50

     //For swap
     swap(v,v2);
     for(auto element: v){
         cout<<element<<" ";  // 50 50 50
     }
     cout<<endl;
     for(auto element: v2){
         cout<<element<<" ";  // 1 2 
     }
     cout<<endl;
     //sort function
     sort(v2.begin(),v2.end());
     for(auto element: v2){
         cout<<element<<" ";  // 1 2 
     }
     cout<<endl;
   //for  max_element
    int mx=*max_element(v2.begin(),v2.end());
    cout<<mx<<endl; //2

    //for min_element
    int mn=*min_element(v2.begin(),v2.end());
    cout<<mn<<endl;  //1

     
}
