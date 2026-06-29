class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> arr;

        for(int i=0;i<n;i++){
        arr.push_back({nums[i],i});//here we store the values and respective indexes which are present in array
        }
        sort(arr.begin(),arr.end());//sort by the arr.first not the second
        int i=0;
        int j=n-1;
        int sum=0;

        while(i<=j){
           sum=arr[i].first+arr[j].first;

           if(sum==target){
            return {arr[i].second,arr[j].second};
           }
           else if (sum<target){
            i++;
           }
           else{
            j--;
           }
        }

    return {};    
    }
};