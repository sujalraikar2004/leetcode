class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int>mp;
        int low=0;
        int ans=0;
        for(int right=0;right<fruits.size();right++){
            mp[fruits[right]]++;
            while(mp.size()>2){
                auto it=mp.find(fruits[low]);
                it->second--;
                if(it->second==0){
                    mp.erase(it);
                }
                low++;
            }
            ans=max(ans,right-low+1);
        }
        return ans;
    }
};