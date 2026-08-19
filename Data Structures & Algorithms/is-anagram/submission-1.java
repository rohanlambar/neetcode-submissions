class Solution {
    public boolean isAnagram(String s, String t) {
             if(s.length() != t.length()) return false;
              HashMap<Character,Integer> mpp = new HashMap<>();
              // building map from first string ;
              for(int i = 0;i<s.length();i++){
                 char ch = s.charAt(i);
                 mpp.put(ch,mpp.getOrDefault(ch,0)+1);
              }
              // checking for mpp value;
              for(int i = 0;i<t.length();i++){
                 char ch = t.charAt(i);
                 if(!mpp.containsKey(ch)) return false;
                 mpp.put(ch,mpp.get(ch)-1);
                 if(mpp.get(ch) <= 0 ) mpp.remove(ch);
              }
              return mpp.size() == 0;
    }
}
