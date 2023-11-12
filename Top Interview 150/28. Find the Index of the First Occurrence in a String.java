problem link :https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/?envType=study-plan-v2&envId=top-interview-150
  class Solution {
    public int strStr(String haystack, String needle) {
      if(haystack.contains(needle)){
          return haystack.indexOf(needle);
      }
      return -1;
    }
}
