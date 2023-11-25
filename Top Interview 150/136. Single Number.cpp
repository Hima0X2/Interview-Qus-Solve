class Solution {
public:
    int singleNumber(vector<int>& v) {
      sort(v.begin(),v.end());
      int x=0;
      for(int i=0;i<v.size();i++){
          x=x^v[i];
      }
      return x;
    }
};
