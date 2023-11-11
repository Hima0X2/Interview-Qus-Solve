problem_link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        int c=0;
     for(int i=0;i<nums.size();i++){
         mp[nums[i]]++;
         if(mp[nums[i]]<=2){
             c++;
         }
         else{
             nums[i]='-';
         }
     }
     sort(nums.begin(),nums.end());
     return c;
    }
};
