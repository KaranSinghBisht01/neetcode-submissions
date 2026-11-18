class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> rightmax(n);
        int rightm=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightm=max(rightm,height[i]);
            rightmax[i]=rightm;
        }
        int leftm=height[0];
        int totalarea=0;
        for(int i=0;i<n;i++){
            leftm=max(leftm,height[i]);
            if(leftm>height[i] && rightmax[i]>height[i]){
                int area=min(leftm,rightmax[i])-height[i];
                totalarea+=area;
            }
        }
        return totalarea;
    }
};
