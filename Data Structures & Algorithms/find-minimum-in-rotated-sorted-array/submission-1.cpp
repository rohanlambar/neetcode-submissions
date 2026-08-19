class Solution {
public:
    int findMin(vector<int> &nums) {
       int low  = 0;
       int high = nums.size()-1;
       int result = INT_MAX;
       while(low <= high ){
             if(nums[low] < nums[high]){
                result = min(result , nums[low]);
                break;
             }
             int mid = low + (high-low)/2;
             result = min(result,nums[mid]);
             if(nums[mid] >= nums[low]){
                low = mid + 1;
             }
             else high = mid - 1;
       }
        return result;
    }
};
