problem link : https://leetcode.com/problems/length-of-last-word/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
    public int lengthOfLastWord(String s) {
        String[] ans = s.split(" ");
        int ln=0,p=0;
        for(int i=0;i<ans.length;i++){
           p=ans[i].length();
        }
        return p;
    }
}
