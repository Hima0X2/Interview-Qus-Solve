class Solution {
public:
    bool isPalindrome(int ans) {
  long long int val=0,x=ans;
  while(ans>0){
      val=val*10+ans%10;
      ans=ans/10;
  }
  if(x==val){
      return true;
  }
  else{
      return false;
  }
    }
};
