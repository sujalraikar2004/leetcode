class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        vector<pair<int,int>>store;
        for(int i=0;i<points.size();i++){
            int d=points[i][0]*points[i][0]+points[i][1]*points[i][1];
            store.push_back({d,i});
        }
        sort(store.begin(),store.end());
        for(int i=0;i<k;i++){
            ans.push_back(points[store[i].second]);
        }
        return ans;
    }
};