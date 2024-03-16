class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(),citations.rend());
        int i=0;
        while(i<citations.size()&&citations[i]>i){
            i++;
        }
        return i;
    }
};
