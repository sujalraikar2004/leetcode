class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(s.size()<p.size())return {};
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(auto c:p){
            freq1[c-'a']++;
        }
        int k=p.size();
        int i=0;
        while(i<k){
            freq2[s[i]-'a']++;
            i++;
        }
        if(freq1==freq2){
            ans.push_back(0);
        }
        while(i<s.size()){
            freq2[s[i]-'a']++;
            freq2[s[i-k]-'a']--;
            if(freq1==freq2){
                ans.push_back(i-k+1);
            }
            i++;
        }
        return ans;
    }
};