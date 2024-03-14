class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int x=0;x<matrix.size();x++){
            int i=0,j=matrix[x].size()-1;
            while(i<=j){
            int mid=(i+j)/2;
            if(target<matrix[x][mid]){
                j=(mid-1);
            }
            else if(target>matrix[x][mid]){
                i=(mid+1);
            }
            else{
                return true;
            }
        }
        }
        return false;
    }
};
