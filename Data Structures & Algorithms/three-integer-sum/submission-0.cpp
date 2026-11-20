class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> count;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=0,k=nums.size()-1;
            long long target=-1*nums[i];
            while(j<k){
                if(i==j){
                    j++;
                }
                if(i==k){
                    k--;
                }
                long long currsum=nums[j]+nums[k];
                if(currsum==target){
                    vector<int> temp(3);
                    temp[0]=nums[i],temp[1]=nums[j],temp[2]=nums[k];
                    sort(temp.begin(),temp.end());
                    count.insert(temp);
                    j++,k--;
                }
                else if(currsum>target){
                    k--;
                }
                else j++;
            }
        }
        vector<vector<int>> ans;
        for(auto it:count){
            ans.push_back(it);
        }
        return ans;
    }
};
