class Solution {
  public:
    int ispossible(vector<int> &arr, int k,int n,int mid){
        int studentcount=1;
        int pagecount=0;
        
       for(int i=0;i<n;i++){
           if(pagecount +arr[i] <=mid){
               pagecount +=arr[i];
           }
           else{
               studentcount++;
               if(studentcount >k || arr[i]>mid){
                   return false;
               }
               pagecount=arr[i];
           }
       }
       return true;
        
    }
    
    int findPages(vector<int> &arr, int k) {
       int s=0;
       int n=arr.size();
       
        // If students are more than books
        if (k > n)
            return -1;
       int ans=-1;
       //for end we need to make the sum of all pages
       int sum=0;
       
       for(int i=0;i<arr.size();i++){
           sum +=arr[i];
       }
       int e=sum;
       int mid=s+(e-s)/2;
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