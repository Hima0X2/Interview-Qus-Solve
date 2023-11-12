problem link : https://leetcode.com/problems/valid-palindrome/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    bool isPalindrome(string s) {
         string p,t;
         transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size();i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
                p.push_back(s[i]);
            }
        }
        t=p;
        cout<<t<<endl;
        reverse(t.begin(),t.end());
        if(t==p){
            return true;
        }
        return false;
    }
};
