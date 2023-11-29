class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,x;
        while(i<=j){
            int mid=(i+j)/2;
            if(target<nums[mid]){
                j=(mid-1);
                x=j+1;
            }
            else if(target>nums[mid]){
                i=(mid+1);
                x=i;
            }
            else{
                return mid;
            }
        }
    return x;
    }
};
