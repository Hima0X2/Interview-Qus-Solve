class Solution {
public:
    string convert(string s, int n) {
        long long int t,i,row=1;
        string v[1000],p="";
     if(n==1){
          return s;
     }
     else{
               bool ok;
          for(i=0;i<s.size();i++){
                    v[row]=v[row]+s[i];
              if(row==1){
               ok=true;
              }
              else if(row==n){
               ok=false;
              }
              if(ok){
               row++;
              }
              else{
               row--;
              }
          }
    }
       for(i=1;i<=n;++i){
           p=p+v[i];
          }
        return p;
    }
        
};
