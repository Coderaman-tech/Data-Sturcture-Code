#include<bits/stdc++.h>
#define ll long long
using namespace std;

void reverse(int arr[],int l ,int r){
	if(l>=r)
	return;
	swap(arr[l],arr[r]);
	reverse(arr,l+1,r-1);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int arr[]={1,2,3,4};
	reverse(arr,0,3);
	for(int i=0;i<4;i++)
	cout<<arr[i]<<" ";
}
//4 3 2 1

// By single variable
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void reverse(int arr[],int i,int n){
	if(i>=n/2)
	return;
	swap(arr[i],arr[n-1-i]);
	reverse(arr,i+1,n);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int arr[]={1,2,3,4};
	//4 is size of array
	reverse(arr,0,4);
	for(int i=0;i<4;i++)
	cout<<arr[i]<<" ";
}
//4 3 2 1
