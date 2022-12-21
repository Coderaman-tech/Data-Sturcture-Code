class Solution {
public:
   void find_permute(vector<vector<int>>&ans,vector<int>&ds,int n,vector<int>& nums,int freq[]){
       if(ds.size()==n){
           ans.push_back(ds);
           return;
       }
       for(int i=0;i<n;i++){
           if(freq[i]==0){
               ds.push_back(nums[i]);
               freq[i]=1;
               find_permute(ans,ds,n,nums,freq);
               ds.pop_back();
               freq[i]=0;
           }
       }
   }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=nums.size();
        int freq[n];
        for(int i=0;i<n;i++)
        freq[i]=0;
        find_permute(ans,ds,n,nums,freq);
        return ans;
    }
};
