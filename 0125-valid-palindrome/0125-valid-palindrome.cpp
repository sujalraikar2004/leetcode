class Solution {
public:
string conv(string s){
    string str="";
    for(int i=0;i<s.size();i++){
        if(isalnum(s[i])){
            str.push_back(tolower(s[i]));
        }
    }
    return str;
}
    bool isPalindrome(string s) {
        string str=conv(s);
        int i=0;
        int j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};