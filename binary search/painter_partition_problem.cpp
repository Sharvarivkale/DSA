class Solution {
  public:
    int ispossible(vector<int>& arr, int k,int n,int mid){
        int paintercount=1;
        int boardcount=0;
        
        for(int i=0;i<n;i++){
            if(boardcount + arr[i]<=mid){
                boardcount += arr[i];
            }
            else{
                paintercount++;
                if(paintercount>k || arr[i]>mid){
                    return false;
                }
                boardcount=arr[i];
            }
        }
        return true;
        
    }
    
    int minTime(vector<int>& arr, int k) {
        int s=0;
        int sum=0;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            sum +=arr[i];
        }
        int e=sum;
        int mid=s+(e-s)/2;
        int ans=-1;
        
        while(s<=e){
            if(ispossible(arr,k,n,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};