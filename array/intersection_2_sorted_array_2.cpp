class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intarr;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int n=nums1.size();
        int m = nums2.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else{
                if(intarr.size()==0 || intarr.back()!=nums1[i]){
                    intarr.push_back(nums1[i]);
                }
                    i++;
                    j++;
                
            }
        }
        return intarr;
    }
};