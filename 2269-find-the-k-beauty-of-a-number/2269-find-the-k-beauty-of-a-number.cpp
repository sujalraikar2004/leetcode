class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str="";
        int nums=num;
        while(nums!=0){
            str.push_back((nums%10)+'0');
            nums/=10;
        }
        reverse(str.begin(),str.end());
        int i=0;
        int count=0;
        while(i+k<=str.size()){
            string s=str.substr(i,k);
            int ans=stoi(s);
        
            if(ans!=0&&num%ans==0){
                count++;
            }
            i++;

        }
        return count;
    }
};