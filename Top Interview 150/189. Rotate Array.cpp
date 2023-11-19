class Solution {
public:
    void rotate(vector<int>& n, int k) {
     vector<int> v;
     int p=n.size();
     k=k%p;
      for(int i=p-k;i<p;i++){
       v.push_back(n[i]);
   }
   for(int i=0;i<p-k;i++){
       v.push_back(n[i]);
   }
   n.clear();
     for(int i=0;i<v.size();i++){
        n.push_back(v[i]);
     }
    }
};
