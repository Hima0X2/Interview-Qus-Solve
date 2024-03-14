class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int i,n=s.size(),c=0,mx=0,j=0;
     map<char,int> mp1;
     for(i=0;i<n;i++){
         mp1[s[i]]++;
         c++;
         while(mp1[s[i]]>1){
            c--;
            mp1[s[j]]--;
            j++;
         }
    mx=max(mx,c);
     }
     return mx;
    }
};
