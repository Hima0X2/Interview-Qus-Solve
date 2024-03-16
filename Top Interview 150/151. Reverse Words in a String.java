class Solution {
    public String reverseWords(String s) {
          String t="";
         String[] arr = s.split("\\s+");
         for(int i=arr.length-1;i>=1;i--){
            if(arr[i]==" "){
                continue;
            }
            t=t+arr[i]+' ';
         }
          t=t+arr[0];
          return t.trim();
    }
}
