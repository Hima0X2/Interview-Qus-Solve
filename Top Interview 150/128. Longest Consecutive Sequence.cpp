class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        else if(nums.size() == 1){
            return 1;
        }
        int c=1,mx=1;
        vector<int> v;
        sort(nums.begin(),nums.end());
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
            v.push_back(nums[i]);
            }
        }
        for(int i=1;i<v.size();i++){
            if(v[i-1]+1==v[i]){
                c++;
            }
            else{
                c=1;
            }
             mx=max(c,mx);
        }
        return mx;
    }
};
