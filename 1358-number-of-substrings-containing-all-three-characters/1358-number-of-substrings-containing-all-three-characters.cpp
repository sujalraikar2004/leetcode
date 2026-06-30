class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0;
        int right=0;
        vector<int>freq(3,0);
        int total=0;
        while(right<s.size()){
            char c=s[right];
            ++freq[c-'a'];
            while(freq[0]>0 && freq[1]>0 && freq[2]>0){
                total+=s.size()-right;
                char ch=s[left];
                --freq[ch-'a'];
                ++left;
            }
            ++right;
        }
        return total;
    }
};