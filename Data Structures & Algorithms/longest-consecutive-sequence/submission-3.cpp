class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        if(nums.size()<=0) return 0;
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i]-1)==st.end()){
                int len=1;
                while(st.find(nums[i]+len)!=st.end()){
                    len++;
                }
                maxlen=max(maxlen,len);
            }
        }
        return maxlen;
    }
};
