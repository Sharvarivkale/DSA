class solution{
  public:
  void union_2array(vector<int> &arr1,int n,vector<int> &arr2,int m){
    vector<int> uniarr;
    int i=0,j=0;
    
    while(i<n && j<m){
      if(arr1[i]<=arr2[j]){
         if(uniarr.size()==0 || uniarr.back()!=arr1[i]){
          uniarr.push_back(arr[i]);
          
         }
         i++;
      }
      else{
         if(uniarr.size()==0 || uniarr.back()!=arr1[j]){
          uniarr.push_back(arr[j]);
          
         }
         j++;
      }
    }
    while(i<n){
      if(uniarr.size()==0 || uniarr.back()!=arr1[i]){
          uniarr.push_back(arr[i]);
          
         }
         i++;
    }
    while(j<m){
               if(uniarr.size()==0 || uniarr.back()!=arr1[j]){
          uniarr.push_back(arr[j]);
          
         }
         j++;
    }
  }

};