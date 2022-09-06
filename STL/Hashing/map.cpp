#include <bits/stdc++.h> 
using namespace std;


int main(){
  int n=5;
  int arr[5]={2,1,2,1,3};
  map<int,int>mp;
  for(int i=0;i<5;i++){
    mp[arr[i]]++;
  }
  map<int,int> :: iterator it;
  for(it = mp.begin();it!=mp.end();it++){
    cout<<it->first<<" "<<it->second<<"\n";
  }
}

/*
Output
1 2
2 2
3 1
*/
