class Solution {
public:

    void find_permute(int ind,vector<vector<int>>&ans,vector<int>& nums,int n){
        if(ind==n){
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<n;i++){
            swap(nums[i],nums[ind]);
            find_permute(ind+1,ans,nums,n);
            swap(nums[i],nums[ind]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        find_permute(0,ans,nums,n);
        return ans;
    }
};
