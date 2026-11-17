class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ispresent;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(ispresent.count(need)){
                return {ispresent[need],i};
            }
            ispresent[nums[i]]=i;
        } 
        return {-1,-1};
    }
};
