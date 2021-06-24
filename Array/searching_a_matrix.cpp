//Searching a element in a matrix
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    //n is no. of rows and m is no. of columns
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    //Now,start searching
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<"\n";
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element is found\n";
    }
    else{
        cout<<"Element is not found\n";
    }
    return 0;
}