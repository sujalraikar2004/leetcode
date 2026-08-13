class Solution {
public:
void f(int open,int close, string current,vector<string>&ans){
    if(open==0 && close==0){
        ans.push_back(current);
        return;
    }
    if(open>0){
        current.push_back('(');
        f(open-1,close,current,ans);
        current.pop_back();
    }
    if(close>open){
        current.push_back(')');
        f(open,close-1,current,ans);
        current.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string current="";
        f(n,n,current,ans);
        return ans;
    }
};