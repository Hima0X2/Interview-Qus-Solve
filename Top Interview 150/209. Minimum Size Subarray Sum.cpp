class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int r=nums.size()-1,l=0,sum=0,ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            while(sum>=target){
                sum=sum-nums[l];
                 ans=min(ans,r-l+1);
                l++;
            }
        }
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
    }
};
