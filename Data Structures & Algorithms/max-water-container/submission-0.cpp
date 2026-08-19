class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        for(int i = 0; i<heights.size();i++){
            for(int j = i+1;j<heights.size();j++){
                int mul = (j-i)*min(heights[j],heights[i]);
                 ans = max(ans,mul);
            }
        }
        return ans;
    }
};
