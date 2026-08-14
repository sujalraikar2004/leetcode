class Solution {
public:
void bfs(int i,int j, vector<vector<char>>&grid,vector<vector<int>>&vis){
    int row=grid.size();
    int col=grid[0].size();
    queue<pair<int,int>>q;
    q.push({i,j});
    vis[i][j]=1;
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        int nrow[]={-1,0,1,0};
        int ncol[]={0,1,0,-1};
        for(int k=0;k<4;k++){
            int drow=x+nrow[k];
            int dcol=y+ncol[k];
            if(drow>=0 && drow<row && dcol>=0 && dcol<col && grid[drow][dcol]=='1' && !vis[drow][dcol]){
                q.push({drow,dcol});
                vis[drow][dcol]=1;
            }
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    bfs(i,j,grid,vis);
                    count++;
                }
            }
        }
        return count;
    }
};