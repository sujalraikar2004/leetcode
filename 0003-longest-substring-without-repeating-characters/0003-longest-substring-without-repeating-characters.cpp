class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int low=0;
      int maxi=0;
      set<char>st;
      for(int i=0;i<s.size();i++){
        while(st.find(s[i])!=st.end()){
            st.erase(s[low]);
            low++;
        }
        st.insert(s[i]);
        maxi=max(maxi,i-low+1);
      }
      return maxi;
    }
};