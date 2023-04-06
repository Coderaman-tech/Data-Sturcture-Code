class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int n=s.size();
        vector<int> pref(n+1,0);
        vector<int> suff(n+1,0);

        for(int i=1;i<=n;i++){
            if(s[i-1]=='1')
            pref[i]=pref[i-1]+1;
            else
            pref[i]=pref[i-1];
        }
        if(s[n-1]=='0')
        suff[n-1]=1;
        for(int i=n-2;i>=0 ;i--){
            if(s[i]=='0')
            suff[i]=suff[i+1]+1;
            else
            suff[i]=suff[i+1];
        }
        int ans=INT_MAX;
        for(int i=1;i<=n;i++){
            ans=min(pref[i-1]+suff[i],ans);
        }
        return ans;
    }
};
