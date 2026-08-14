class Solution {
public:
bool ispalin(string s,int start,int end){
    while(start<=end){
        if(s[start++]!=s[end--]){
            return false;
        }
       
    }
     return true;
}
void f(int start,string s,vector<string>&current,vector<vector<string>>&ans ){
    if(start==s.size()){
        ans.push_back(current);
        return;
    }
    for(int end=start;end<s.size();end++){
        
        if(ispalin(s,start,end)){
            current.push_back(s.substr(start,end-start+1));
            f(end+1,s,current,ans);
            current.pop_back();
        }
        

    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>current;
        f(0,s,current,ans);
        return ans;

    }
};