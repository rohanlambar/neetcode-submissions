class Solution {
public:
    
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax(n);
        vector<int> rightMax(n);
        int lMax = height[0];
        for(int i = 0;i<n;i++){
           lMax = max(lMax,height[i]);
           leftMax[i] = lMax;
        }
         int rMax = height[n-1];
        for(int i = n-1;i>=0;i--){
           rMax = max(rMax,height[i]);
           rightMax[i] = rMax;
        }
        int ans = 0;
        for(int i = 0;i<n;i++) ans += min(leftMax[i],rightMax[i]) - height[i];
        return ans;
    }
};
