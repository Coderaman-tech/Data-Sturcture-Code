#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;
    cout<<*p<<endl;

    int **q=&p;
    cout<<*q<<endl;
    cout<<**q<<endl;
    return 0;
}
/*Output
10
0x61feb8
10
*/