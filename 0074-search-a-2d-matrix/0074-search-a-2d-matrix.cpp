class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0, h=matrix.size()-1, idx=0;
        while(l <= h){
            int m = (l+h)/2;
            if(matrix[m][0] == target) return true;
            else if(matrix[m][0] < target){
                idx = m;
                l = m+1;
            }
            else h = m-1;
        }
        l=0, h = matrix[idx].size()-1;
        while(l <= h){
            int m = (l+h)/2;
            if(matrix[idx][m] == target) return true;
            else if(matrix[idx][m] < target) l = m+1;
            else h = m-1;
        }
        return false;
    }
};