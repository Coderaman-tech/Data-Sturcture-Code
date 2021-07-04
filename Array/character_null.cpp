#include<iostream>
using namespace std;
int main(){
  char arr[100]="aman is a great coder\0";
  int i=0;
  while(arr[i]!='\0'){
      cout<<arr[i]<<endl;
      i++;
  }
}

/*
output-
a
m
a
n

i
s

a

g
r
e
a
t

c
o
d
e
r
*/
