class Solution {
public:
    int climbStairs(int n) {
        if(n==1||n==2){
            return n;
        }
        int one=1,two=2,c;
        for(int i=3;i<=n;i++){
            c=one+two;
            one=two;
            two=c;
        }
        return c;
    }
};
