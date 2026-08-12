class Solution {
public:
    string reorganizeString(string s) {
        map<char,int>ch;
        for(auto it:s){
            ch[it]++;
        }
        priority_queue<pair<int,char>>q;
        for(auto it:ch){
            q.push({it.second,it.first});
        }
        string ans="";
        while(q.size()>=2){
            auto first=q.top();
            q.pop();
            auto second=q.top();
            q.pop();
            ans+=first.second;
            first.first--;
            ans+=second.second;
            second.first--;
            if(first.first>0){
                q.push({first.first,first.second});
            }
            if(second.first>0){
                q.push({second.first,second.second});
            }

        }
        if(!q.empty()){
            auto last=q.top();
            q.pop();
            if(last.first>1){
                return "";
            }
            ans+=last.second;

        }
        return ans;
    }
};