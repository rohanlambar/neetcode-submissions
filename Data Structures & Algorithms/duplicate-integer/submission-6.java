class Solution {
    public boolean hasDuplicate(int[] nums) {
        Map<Integer,Integer> unorderedMap = new HashMap<>();
        for(int el : nums){
            if(!unorderedMap.containsKey(el)){
                  unorderedMap.put(el,1);
            }
            else return true;
        }
        return false;
    }
}