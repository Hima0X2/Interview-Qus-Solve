class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string result;
        string a=strs[0],b=strs[strs.size()-1];
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                result.push_back(a[i]);
            }
            else{
                break;
            }
        }
        return result;
    }
};
