class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans=0;
        for(int i=1;i<p.size();i++){
            if(p[i]-p[i-1]>0){
                ans=ans+p[i]-p[i-1];
            }
        }
        return ans;
    }
};
