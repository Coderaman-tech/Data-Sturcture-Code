#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool palindrome(string s,int i,int n){
	if(i>=n/2)
	return true;
	if(s[i]==s[n-1-i])
	return palindrome(s,i+1,n);
	return false;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s;
	cin>>s;
	cout<<palindrome(s,0,s.size());
}
