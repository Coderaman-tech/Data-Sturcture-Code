#include<bits/stdc++.h>
using namespace std;
int main(){
    //concat two string
    string s1="fam",s2="ily";
    s1.append(s2);
    cout<<s1<<endl;
    /*another way to concat is
    s1=s1+s2;
    cout<<s1<<endl;*/

//assign means replace string with new string
string s="Gentleman";
s.assign("Naughty");
cout<<s<<endl;
/*another way
s="nayghty";
cout<<s<<endl;
*/
//fing character at particular position
cout<<s.at(3)<<endl;
//another way
cout<<s[3]<<endl;
//clear(erase) function
s.clear();
cout<<s<<endl;
//Compare function
s1="abc",s2="xyz";
cout<<s2.compare(s1)<<endl;

s2="abc",s1="xyz";
cout<<s2.compare(s1)<<endl;

s2="abc",s1="abc";
cout<<s2.compare(s1)<<endl;

//substring
s="Ramayana";
cout<<s.substr(2,5)<<endl;
//size of string
cout<<s.size()<<endl;
//length==size
cout<<s.length()<<endl;

}