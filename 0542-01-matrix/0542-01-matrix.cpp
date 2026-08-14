class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>dist(n,vector<int>(m,0));
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            int nrow[]={-1,0,1,0};
            int ncol[]={0,1,0,-1};
            for(int k=0;k<4;k++){
                int drow=row+nrow[k];
                int dcol=col+ncol[k];
                if(drow>=0 && drow<n && dcol>=0 && dcol<m && !vis[drow][dcol]){
                    dist[drow][dcol]=dist[row][col]+1;
                    vis[drow][dcol]=1;
                    q.push({drow,dcol});
                }
            }


        }
        return dist;

    }
};