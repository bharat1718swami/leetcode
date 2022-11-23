class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int N = matrix.size(), M = matrix[0].size();
        
        int r = 0, c = M-1;
        while(r < N && c >= 0){
            if(matrix[r][c] == target){
                return true;
            }
            else if(matrix[r][c] > target){
                c--;
            }
            else{
                r++;
            }
        }
        return false;
    }
};