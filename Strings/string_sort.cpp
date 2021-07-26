//Sorting of string
#include<iostream>
#include<string>
#include<algorithm>  //uses to apply sort func
using namespace std;
int main(){
  string str="dnfljabfabf";
  sort(str.begin(),str.end());
  cout<<str<<endl;
}