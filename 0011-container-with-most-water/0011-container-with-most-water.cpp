class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        long long maxi=0;
        while(low<high){
            int ht=min(height[low],height[high]);
            int width=high-low;
            long long area=ht*width;
            maxi=max(maxi,area);
            if(height[low]<height[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return maxi;
    }
};