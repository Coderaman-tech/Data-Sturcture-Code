//lower and upper case of string using C++ STL
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    //for upper case
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    //for lower case
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
}