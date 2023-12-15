class Solution {
public:
    vector<vector<int>> permute(vector<int>& a) {
         vector<vector<int>> v;
         sort(a.begin(),a.end());
         v.push_back(a);
           while(next_permutation(a.begin(),a.end())){
               v.push_back(a);
           }
           return v;
    }
};
