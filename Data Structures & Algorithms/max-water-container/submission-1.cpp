class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int low  = 0;
        int high = heights.size()-1;
        while(low < high ){
                
                int mul = (high - low )*min(heights[high],heights[low]);
                 ans = max(ans,mul);
                 if(heights[low ] < heights[high] ) low++;
                 else high --;
        }
        return ans;
    }
};
