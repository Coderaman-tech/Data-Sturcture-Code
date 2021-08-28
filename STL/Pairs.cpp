#include <bits/stdc++.h>
using namespace std;

int main(){
    //pair is basically used for make a relation between data_type
   pair<int,string>p;
   p=make_pair(2,"abc");
   //another way to initialise pair
   p={2,"abc"};
   //way to copy pair with another variavle
   pair<int,string>p1=p;
   cout<<p.first<<" "<<p.second<<endl;// 2 abc
   cout<<p1.first<<" "<<p1.second<<endl;//2 abc
   //lets change the value of pair(p) element
   pair<int,string>&p2=p;
  p2.first=3;
  cout<<p.first<<"\n"; //3

  //let's see practical use of it
  int a[]={1,2,3};
  int b[]={2,3,4};
  //pair of array
  pair<int,int>p_array[3];
  p_array[0]={1,2};
  p_array[1]={2,3};
  p_array[2]={3,4};
  swap(p_array[0],p_array[2]);
  for(int i=0;i<3;i++){
      cout<<p_array[i].first<<" "<<p_array[i].second<<"\n";
  } 
/*
for taking input
cin>>p.first;
//for print 
cout<<p.first;
*/
}
