class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> mpp = new HashMap<>();
        int[] ans = new int[2];
        for(int i = 0;i<nums.length;i++){
            int num = nums[i];
            int diff = target-num;
            if(mpp.containsKey(diff)){
                return new int[] {mpp.get(diff),i};
            }
            mpp.put(num,i);

        }
        return new int[] {};
    }
}
