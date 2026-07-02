class Solution {
public:
string count(int n){
    string str="";
    int temp=n;
    while(temp!=0){
        str.push_back((temp%2)+'0');
        temp/=2;
    }
    reverse(str.begin(),str.end());
    return str;
}
    vector<int> countBits(int n) {
        vector<int>ans;
        while(n>=0){
            int coun=0;
            string str=count(n);
            for(auto i:str){
                if(i=='1'){
                    coun++;
                }
            }
            ans.push_back(coun);
            n--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};