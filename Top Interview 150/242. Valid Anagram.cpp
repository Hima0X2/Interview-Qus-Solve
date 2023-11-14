problem link : https://leetcode.com/problems/valid-anagram/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            return true;
        }
        return false;
    }
};
