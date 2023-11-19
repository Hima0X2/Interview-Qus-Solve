class Solution {
public:
    int mySqrt(int x) {
        long long low=1,high=x,ans=0;
        while(low<=high){
            long mid=low+(high-low)/2;
           long long sqr=mid*mid;
            if(sqr==x){
                return mid;
            }
            else if(sqr<x){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans; 
        }
};
