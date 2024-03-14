class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i,j=0;
        if(nums.size()==1){
                j=0;
            }
        else if(nums.size()==2){
            if(nums[0]>=nums[1]){
               j=0;
            }
            else{
              j=1;  
            }
        }
        else{
            if(nums[0]>nums[1]) j=0;
        for(i=2;i<nums.size();i++){
          if(nums[i]<nums[i-1]&&nums[i-2]<nums[i-1]){
              j=i-1;
               break;
          }
     }
            if(nums[nums.size()-1]>nums[nums.size()-2]) j=nums.size()-1;
        }
        return j;
    }
};
