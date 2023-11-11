class Solution {
public:
    int majorityElement(vector<int>& s) {
     int n=s.size();
     sort(s.begin(),s.end());
     return s[n/2];
    }
};
