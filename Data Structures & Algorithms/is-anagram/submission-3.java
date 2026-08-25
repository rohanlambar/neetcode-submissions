class Solution {
    public boolean isAnagram(String s, String t) {
            HashMap<Character,Integer> mpp1 = new HashMap<>();
            HashMap<Character,Integer> mpp2 = new HashMap<>();
            for(char ch : s.toCharArray()) mpp1.put(ch,mpp1.getOrDefault(ch,0)+1);
            for(char ch : t.toCharArray())  mpp2.put(ch,mpp2.getOrDefault(ch,0)+1);
            if(mpp1.size() != mpp2.size()) return false;
            for(Map.Entry<Character,Integer> entry : mpp2.entrySet()){
                char ch = entry.getKey();
                int  freq = entry.getValue();
                if(!mpp1.containsKey(ch) || !mpp1.get(ch).equals(freq)) return false;

            }
            return true;

    }
}
