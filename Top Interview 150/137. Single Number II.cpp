class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
      for(auto val:mp){
            if(val.second == 1){
                return val.first;
            }
        }
        return -1;
    }
};
