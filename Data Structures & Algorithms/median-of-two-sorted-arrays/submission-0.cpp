class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> narr;
        int n=nums1.size(),m=nums2.size();
        int i=0,j=0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                narr.push_back(nums1[i]);
                i++;
            }
            else{
                narr.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            narr.push_back(nums1[i++]);
        }
        while(j<m){
            narr.push_back(nums2[j++]);
        }
        if((n+m)%2){
            int ind=(n+m)/2;
            return double(narr[ind]);
        }
        else{
            int ind=(n+m)/2;
            int ind2=ind-1;
             return (static_cast<double>(narr[ind]) + narr[ind - 1]) / 2.0;
        }
    }
};
