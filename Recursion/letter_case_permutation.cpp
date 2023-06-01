class Solution {
public:
    
    void printall(vector<string>&ans,string s,string str,int n,int ind){
        if(ind==n){
            ans.push_back(str);
            return;
        }
        if(str[ind]>='a' && str[ind]<='z'){
            printall(ans,s,str,n,ind+1);
            str[ind]-=32;
            printall(ans,s,str,n,ind+1);
        }
        else if(str[ind]>='A' && str[ind]<='Z'){
             printall(ans,s,str,n,ind+1);
            str[ind]+=32;
            printall(ans,s,str,n,ind+1);
        }
        else{
            printall(ans,s,str,n,ind+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string str=s;
        int n=s.size();
        printall(ans,s,str,n,0);
        return ans;
    }
};
