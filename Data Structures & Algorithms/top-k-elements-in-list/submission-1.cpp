class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(auto el : nums) 
            mpp[el]++;
        vector<pair<int,int>> container;
        for(auto [num,freq]:mpp)
                container.push_back({freq,num});
        sort(container.begin(),container.end(),greater<>());        
        vector<int> ans;
        for(int i= 0;i<k;i++)
            ans.push_back(container[i].second);
            return ans;        
    }
};
