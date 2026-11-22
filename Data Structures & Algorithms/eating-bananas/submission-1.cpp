class Solution {
public:
    int find(int x,vector<int>& piles,int h){
        int count=0;
        for(int i=0;i<piles.size();i++){
            count+=((piles[i]+x-1)/h);
        }
        return count<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end());
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(find(mid,piles,h)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
