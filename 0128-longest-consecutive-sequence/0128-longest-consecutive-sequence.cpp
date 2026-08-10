class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<1)return 0;
        priority_queue<int,vector<int>,greater<int>>q;
        for(auto num:nums){
            q.push(num);
        }
        int count=1;
        int longest=1;
        int prev=q.top();
        if(!q.empty())q.pop();
        while(!q.empty()){
            int curr=q.top();
            q.pop();
            if(prev==curr)continue;
            if(prev+1==curr){
                count++;
                
            }
            else{
                longest=max(longest,count);  
                count=1;
            }
            prev=curr;
        }
        longest=max(longest,count);
        return longest;

    }
};