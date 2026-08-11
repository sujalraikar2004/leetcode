class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        if(s1.size()>s2.size())return false;
        for(auto c:s1){
            freq1[c-'a']++;
        }
        int k=s1.size();
        for(int i=0;i<k;i++){
            freq2[s2[i]-'a']++;

        }
        if(freq2==freq1)return true;
        for(int i=k;i<s2.size();i++){
            freq2[s2[i]-'a']++;
            freq2[s2[i-k]-'a']--;
            if(freq2==freq1)return true;
        }
        return false;
    }
};