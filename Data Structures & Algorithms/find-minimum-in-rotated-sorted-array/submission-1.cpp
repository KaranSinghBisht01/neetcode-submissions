class Solution {
public:
    int findMin(vector<int> &nums) {
        int low=0,high=nums.size()-1,ans=INT_MAX;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=nums[low]){
                ans=min(ans,nums[mid]);
                low=mid+1;
            }
            else high=mid;
        }
        return nums[low];
    }
};
