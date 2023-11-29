class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        map<char,int> mp;
        map<char,int> mp1;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mp1[t[i]]++;
        }
        for(int i=0;i<s.size();i++){
           if(mp[s[i]]!=mp1[t[i]]){
               return false;
           }
           mp[s[i]]=i;
           mp1[t[i]]=i;
        }
        return true;
    }
};
