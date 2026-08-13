class Solution {
public:
    int largest(vector<int>&height){
        int ans=0;
        stack<int>st;
        int n=height.size();
        for(int i=0;i<=n;i++){
            int current=(i==n)?0:height[i];
            while(!st.empty() && height[st.top()]>current){
                int ht=height[st.top()];
                st.pop();
                int width=0;
                if(st.empty()){
                    width=i;
                }
                else{
                    width=i-st.top()-1;
                }
                ans=max(ans,ht*width);
            }
            st.push(i);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int ans=0;
        vector<int>height(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]=='1'){
                    height[j]+=1;
                }
                else{
                    height[j]=0;
                }
            }
            ans=max(ans,largest(height));
        }
        return ans;

    }
};