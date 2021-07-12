#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    for(int i=0;i<3;i++){
        cout<<*(arr+i)<<" ";
    }
    return 0;
}
/*Output
10 20 30
*/