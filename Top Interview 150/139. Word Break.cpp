
class Solution {
public:
unordered_map<string,bool>dp;
int help(string s,unordered_set<string>&word){
    if(s.size()==0){
        return 1;
    }
    if(dp.find(s)!=dp.end()){
        return dp[s];
        }
        for(int i=0;i<s.size();i++){
            string r=s.substr(0,i+1);
            if(word.count(r)){
                if(help(s.substr(i+1),word)){
                return dp[s]=true;
                }
            }
        }
    return dp[s]=0;
}
    bool wordBreak(string s, vector<string>& wordDict) {
       unordered_set<string> st;
       for(auto u:wordDict){
           st.insert(u);
       }
      return help(s,st);
    }
};
