class Solution {
    bool check(string str1,string str2){
        if(str1.length() != str2.length()) return false;
        vector<int> count(26,0);
        for(int i = 0;i<str1.length();i++){
            count[str1[i]-'a']++;
            count[str2[i]-'a']--;
        }
        for(int i = 0;i<count.size();i++) 
                  if(count[i]!=0) 
                      return false;
        return true;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        vector<int> visited(n,0);
        for(int i = 0;i<n;i++){
           if(visited[i]!=1){
              vector<string> temp;
              temp.push_back(strs[i]);
             for(int j=i+1;j<n;j++){
                if(check(strs[i],strs[j])){
                    temp.push_back(strs[j]);
                    visited[j]=1;
                }
             }
            ans.push_back(temp);
           }

        }
        return ans;
    }
};
