problem link : https://leetcode.com/problems/happy-number/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        int i,j;
        while(1){
            int sum=0;
            while(n){
                sum=sum+(n%10)*(n%10);
                n=n/10;
            }
            if(s.find(sum)!=s.end()){
                return false;
            }
            if(sum==1){
                return true;
            }
             s.insert(sum);
              n=sum;
        }
    }
};
