problem link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    int maxProfit(vector<int>& s) {
         int mn=s[0],mx=0,profit=0;
        for(int i=1;i<s.size();i++){
                mn=min(mn,s[i]);
                mx=s[i]-mn;
                profit=max(profit,mx);
        }
        return profit;
    }
};
