class Solution {
public:
    void combsum(int index,int target,vector<int>&arr,vector<int>&v,vector<vector<int>>&ans){
        
        if(index==arr.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        if(target>=arr[index]){
            v.push_back(arr[index]);
            combsum(index,target-arr[index],arr,v,ans);
            v.pop_back();
        }
        combsum(index+1,target,arr,v,ans);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        combsum(0,target,candidates,v,ans);
        return ans;
    }
};
/*
TC- O(2^n *k)
SC- 0(n*k)
*/
