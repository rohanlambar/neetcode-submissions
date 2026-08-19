class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
              int product = 1;
              int noOfZeros = 0;
              int productWithoutZero = 1;
              for(int i = 0;i<nums.size();i++){
                 if(nums[i]!=0) {
                    productWithoutZero *= nums[i];
                 }
                 if(nums[i] == 0) noOfZeros++;
                product *= nums[i];
                
              }
              if(noOfZeros > 1) productWithoutZero = 0;
             
              vector<int> ans;
              for(int i =0 ;i<nums.size();i++){
                  if(nums[i]!=0)
                  ans.push_back(product/nums[i]);
                  else ans.push_back(productWithoutZero);
              }
              return ans;
    }
};
