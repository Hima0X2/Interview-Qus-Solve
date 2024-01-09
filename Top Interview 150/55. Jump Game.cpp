class Solution {
public:
    bool canJump(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(i>sum){
                return false;
            }
            sum=max(sum,i+nums[i]);
        }
        return true;
    }
};
