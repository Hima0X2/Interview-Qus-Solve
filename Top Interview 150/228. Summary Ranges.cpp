class Solution {
public:
    vector<string> summaryRanges(vector<int>& v) {
        vector<string> result;
        string s="";
        for(int i=0;i<v.size();i++){
              int ans=v[i];
            while(i+1<v.size()&&v[i+1]==v[i]+1){
                i++;
            }
            if(ans!=v[i]){
                result.push_back(to_string(ans)+"->"+to_string(v[i]));
            }
            else{
                result.push_back(to_string(ans));
            }
        }
        return result;
    }
};
