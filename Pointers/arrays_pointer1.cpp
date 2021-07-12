//print array using pointer
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3};
    //arr means address of 1st element
    cout<<*arr<<endl;
    int *ptr=arr;
    for(int i=0;i<3;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    cout<<sizeof(ptr)<<endl;
    return 0;
}
/*Output
1
1 2 3 
4
*/
