#include<iostream>
#include<string>
using namespace std;
int main(){
    //sring to integer conversion
    string str="1234";
    int a=stoi(str);
    cout<<a+2<<endl;

    //integer to string conversion
    int b=83476;
   string s= to_string(b);
    cout<<s+"23"<<endl;
}