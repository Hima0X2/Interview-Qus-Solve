problem link : https://leetcode.com/problems/is-subsequence/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=0;
       for(int i=0;i<t.size();i++){
           if(s[k]==t[i]){
               k++;
           }
       }
       if(k==s.size()){
           return true;
       }
       return false;
    }
};
