class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
       int k=v.size();
       for(int i=k-1;i>=0;i--){
           if(v[i]==9){
               v[i]=0;
           }
           else{
               v[i]=v[i]+1;
               return v;
           }
       }
       v.push_back(0);
       v[0]=1;
       return v;
    }
};
