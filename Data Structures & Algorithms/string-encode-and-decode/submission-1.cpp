class Solution {
public:

    string encode(vector<string>& strs) {
            string ans = "";
            for(int i = 0;i<strs.size();i++){
                   for(int j=0;j<strs[i].length();j++){
                        ans+=strs[i][j];
                   }
                   ans+='/';
            }
            return ans;
    }

    vector<string> decode(string s) {
                  vector<string> ans;
                  string temp = "";
                  for(int i=0;i<s.length();i++){
                       if(s[i]=='/'){
                        ans.push_back(temp);
                        temp = "";
                       }
                       else temp += s[i];
                  }
                  return ans;
    }
};
