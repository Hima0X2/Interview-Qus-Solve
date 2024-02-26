class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int i,j,n=a.size(),m=a[0].size(),k,l;
        vector<int> r;
        vector<int> c;
         for(i=0;i<n;i++){
          for(j=0;j<m;j++){
           if(a[i][j]==0){
               r.push_back(i);
               c.push_back(j);
           }
           }
          }
        for(i=0;i<r.size();i++){
            for(j=0;j<m;j++){
                a[r[i]][j]=0;
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<c.size();j++){
                a[i][c[j]]=0;
            }
        }
        for(i=0;i<n;i++){
          for(j=0;j<m;j++){
           cout<<a[i][j]<<" ";
           }
            cout<<endl;
          }
    }
};
