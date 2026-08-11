class Solution {
public:
int searchleft(vector<int>& nums,int target){
    int left=0;
    int right=nums.size()-1;
    int ans=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            ans=mid;
            right=mid-1;
        }
        else if(nums[mid]>target){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return ans;
}
int searchright(vector<int>& nums,int target){
    int left=0;
    int right=nums.size()-1;
    int ans=-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            ans=mid;
            left=mid+1;
        }
        else if(nums[mid]>target){
            right=mid-1;
        }
        else{
            left=  mid+1;
        }
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans1=searchleft(nums,target);
        int ans2=searchright(nums,target);
        return {ans1,ans2};
    }
};