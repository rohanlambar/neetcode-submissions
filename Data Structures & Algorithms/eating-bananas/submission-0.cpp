class Solution {
public:
    int checker(vector<int> &piles,int value){
        int ans = 0;
         for(auto el : piles ){
               if(el%value == 0){
                ans += el/value;
               }
               else  ans += el/value + 1;
         }
         return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        
        while(low<=high){
               int mid = low + (high - low)/2;
               if(checker(piles,mid) <= h){
                     high = mid - 1;
               }
               else low = mid + 1;
        }
        return low;
        
    }
};
