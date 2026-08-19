class Solution {
public:
    
    int characterReplacement(string s, int k) {
        
        int left = 0,right = 0,maxLength = 0;
        unordered_map<char,int> mpp;
        int maxFreq = 0;
        while( right < s.length()){
            mpp[s[right]]++;
            maxFreq = max(maxFreq,mpp[s[right]]); 
             int length = right - left + 1;
             if(length - maxFreq <= k){
                 right++;
             }
             else{
                while(left <= right && length - maxFreq > k){
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
