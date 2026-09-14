class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int left=0;
        int right=heights.size()-1;
        int area=0;
        int maxarea=INT_MIN;

        while(left<right)
        {
            area=min(heights[left],heights[right]) * (right-left);
            maxarea=max(maxarea,area);
            if(heights[left]<=heights[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxarea;
    }
};
