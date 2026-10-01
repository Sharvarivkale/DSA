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
        //include
        output.push_back(nums[index]);
        solve(nums,target-nums[index],index,output,ans);//here we not add the index+1 becaz we want the infinite way to add number which are get handle by the base condition
        //backtrack
        output.pop_back();

        //exclude
        solve(nums,target,index+1,output,ans);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
         sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums,target,index,output,ans);

        return ans;

    }
};
