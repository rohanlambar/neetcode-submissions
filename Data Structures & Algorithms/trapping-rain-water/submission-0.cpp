class Solution {
public:
    int findMaxElement(vector<int>& arr , int index,int l ,int r){
        int ans = arr[index];
          for(int i = l;i<r;i++){
              ans = max(ans,arr[i]);
          }
          return ans;
    }
    int trap(vector<int>& height) {
         int ans = 0;
         int n = height.size();
         for(int i = 0 ;i<n;i++){
            int l = findMaxElement(height,i,0,i);
            int r = findMaxElement(height,i,i+1,n);
            ans += min(l,r)-height[i];
         }
         return ans;
    }
};
