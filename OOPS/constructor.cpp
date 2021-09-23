#include<bits/stdc++.h>
using namespace std;

class student{
  string name;
  public:
  int age;
  bool gender;
  student(){
    cout<<"Default constructor"<<endl;
  }
  student(string s,int a,int g){
    cout<<"Parametrised constructor"<<endl;
    name=s;
    age=a;
    gender=g;
  }
  student(student &a){
   cout<<"Copy constructor"<<endl;
   name=a.name;
   age=a.age;
   gender=a.gender;
  }
};
int main(){
  student a("Aman",19,0);
  student b;
  student c=a;
  return 0;
}
/*
Output-
Parametrised constructor
Default constructor
Copy constructor
*/
