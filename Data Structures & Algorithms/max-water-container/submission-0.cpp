class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        long long maxarea=0;
        while(i<j){
            long long area;
            area=(min(heights[i],heights[j])*(j-i));
            maxarea=max(area,maxarea);
            if(heights[i]<heights[j]) i++;
            else j--;
        }   
        return maxarea;
    }
};
