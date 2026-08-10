class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int>st;
        int ans=0;
        st.push(prices[0]);
        for(int i=1;i<prices.size();i++){
            int num=st.top();

            while(!st.empty()&&st.top()>prices[i]){
                st.pop();
            }

            if(prices[i]<num){
                st.push(prices[i]);
            }
            if(prices[i]>st.top()){
                ans=max(ans,prices[i]-st.top());
            }

        }
        return ans;
    }
};