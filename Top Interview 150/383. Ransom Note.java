problem link : https://leetcode.com/problems/ransom-note/description/?envType=study-plan-v2&envId=top-interview-150
class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
       int[] count = new int[26];
        for (char c : magazine.toCharArray()) {
            count[c - 'a']++;
        }
        for (char c : ransomNote.toCharArray()) {
            if (--count[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
}
