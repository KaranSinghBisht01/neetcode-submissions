class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int maxlen=1;
        for(int i=0;i<nums.size();i++){
            if(st.count(nums[i]-1)){
                int len=1;
                int el=nums[i]-1;
                while(st.count(el)){
                    len++;
                    el--;
                }
                maxlen=max(maxlen,len);
            }
        }
        return maxlen;
    }
};
