class Solution {
public:
    int maxCount(unordered_map<char,int>& mpp){
        int ans = 0;
        for(auto [ch,freq]: mpp){
            ans = max(freq,ans);
        }
        return ans;
    }
    int characterReplacement(string s, int k) {
        
        int left = 0,right = 0,maxLength = 0;
        unordered_map<char,int> mpp;
        while( right < s.length()){
             mpp[s[right]]++;
             int length = right - left + 1;
             if(length - maxCount(mpp) <= k){
                 right++;
             }
             else{
                while(left <= right && length - maxCount(mpp) > k){
                    mpp[s[left]]--;
                    left++;
                    length = right - left + 1;
                }
                right++;
             }
             maxLength = max(maxLength,length);
        }
        return maxLength;
    }
};
