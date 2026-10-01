class Solution {
    void solve(vector<int>& nums, int target,int index,vector<int> output, vector<vector<int>> &ans){
        //base condition
        if(target==0){
            ans.push_back(output);
            return;
        }
        if(index>=nums.size()){
            return;
        }
        if(target<0){
            return;
        }
        if(nums[index] > target) {
            return;
        }
        //

        //include
        output.push_back(nums[index]);
        solve(nums,target-nums[index],index+1,output,ans);
        //backtrack
        output.pop_back();
        
        while( index+1 < nums.size() && nums[index]==nums[index+1]){
            index++;
        }

        //exclude
        solve(nums,target,index+1,output,ans);

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(candidates,target,index,output,ans);

        return ans;

        
    }
};
