int longestsumarray(vector<int> & nums,long long k){
  long long sum=nums[0];
  int maxlen;
  int left=0;

  for(int right=0;right<nums.size();right++){
    sum +=nums[right];

    while(left<=right && sum>k){
      sum=sum-nums[left];
      left++;
    }
    if(sum==k){
      maxlen=max(maxlen,right-left+1);
    }
  }
}