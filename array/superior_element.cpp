int superiorelemet(vector<int> &nums){
  vector<int> ans;
  int maxi=-1;

  for(int i=n-1;i>=0;i--){
    if(nums[i]>maxi){
      ans.push_back(nums[i]);
    }
    maxi=max(maxi,nums[i]);
  }
  sort(ans.begin(),ans.end());
  return ans;
}