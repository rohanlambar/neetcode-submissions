class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st;
        int left = 0;
        int right = 0;
        int maxLength = 0;
        while(right < s.length()){
            if(st.find(s[right]) == st.end()){
                st.insert(s[right]);
                right++;
            }
            else{
                st.erase(s[left]);
                left++;
            }
            maxLength = max(maxLength,right - left );
        }
        return maxLength;
    }
};
