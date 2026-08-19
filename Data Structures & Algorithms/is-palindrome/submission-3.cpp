class Solution {
public:
    bool isPalindrome(string s) {
        string str = "",temp = "";
    
        for(int i=0;i<s.length();i++){
                if(s[i] == ' '){
                     str += temp;
                     temp = "";
                }
                else if((s[i]>='a' && s[i]<='z' ) || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                    
                    temp+=(char)tolower(s[i]);
                }
        }
        str+=temp;
        int high = str.length()-1;
        int low = 0;
        while(low <= high ){
            if(str[low]!=str[high]) return false;
            high--;
            low++;
        }
        return true;
    }
};
