class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n = a.size();
   vector<vector<int>> result(n,vector<int>(n, 0));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                result[i][j]=a[j][i];
            }
        }
        for(int i=0;i<n;i++){
            reverse(result[i].begin(),result[i].end());
        }
       for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=result[i][j];
            }
        }
    }
};
