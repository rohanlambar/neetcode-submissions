class Solution {
public:
    int helper(vector<int> &nums,int low ,int high,int target){
        if(low > high ) return -1;
        int mid = (low+high)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target ) helper(nums,mid+1,high,target);
        else helper(nums,low,mid-1,target);
    }
    int search(vector<int>& nums, int target) {
         int low  =  0;
         int high = nums.size() - 1;
         while(low <=high){
               int mid = low + (high - low )/2;
               if(nums[mid] > target ) high = mid - 1;
               else if(nums[mid] < target ) low = mid+1;
               else return mid;

         }
         return -1;
    }
};
