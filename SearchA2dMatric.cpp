class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int st = 0, end = rows * cols - 1;
        
        while (st <= end) {
            int mid = st + (end - st) / 2;
            int rows = mid / cols;
            int col = mid % cols;

            if (matrix[rows][col] == target) {
                return true;
            } else if (matrix[rows][col] < target) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
};