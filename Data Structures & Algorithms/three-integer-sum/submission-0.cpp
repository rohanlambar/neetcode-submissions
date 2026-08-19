class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i = 0;i<nums.size();i++){
           int current = nums[i]; 
          
            int target = 0 - nums[i];
            int low = i+1;
            int high = nums.size()-1;
            while(low < high){
                if(nums[low]+nums[high] > target ) high--;
                else if(nums[low]+nums[high] < target) low++;
                else{
                    ans.push_back({nums[i],nums[low],nums[high]});
                    int lower = nums[low]; 
                    while(low < high && nums[low] == lower) low++; 
                    int higher = nums[high]; 
                    while(high > low && nums[high] == higher) high--;
                   
                }
            }
            while(i < nums.size() && current == nums[i+1]) i++;
        }
        return ans;
    }
};
