class Solution {
public:
    int maxArea(vector<int>& a) {
        int i=0,j=a.size()-1,ans=0;
        while(i<j){
            if(a[i]>a[j]){
                ans=max(ans,(j-i)*a[j]);
                j--;
            }
            else{
                ans=max(ans,(j-i)*a[i]);
                i++;
            }
        }
        return ans;
    }
};
