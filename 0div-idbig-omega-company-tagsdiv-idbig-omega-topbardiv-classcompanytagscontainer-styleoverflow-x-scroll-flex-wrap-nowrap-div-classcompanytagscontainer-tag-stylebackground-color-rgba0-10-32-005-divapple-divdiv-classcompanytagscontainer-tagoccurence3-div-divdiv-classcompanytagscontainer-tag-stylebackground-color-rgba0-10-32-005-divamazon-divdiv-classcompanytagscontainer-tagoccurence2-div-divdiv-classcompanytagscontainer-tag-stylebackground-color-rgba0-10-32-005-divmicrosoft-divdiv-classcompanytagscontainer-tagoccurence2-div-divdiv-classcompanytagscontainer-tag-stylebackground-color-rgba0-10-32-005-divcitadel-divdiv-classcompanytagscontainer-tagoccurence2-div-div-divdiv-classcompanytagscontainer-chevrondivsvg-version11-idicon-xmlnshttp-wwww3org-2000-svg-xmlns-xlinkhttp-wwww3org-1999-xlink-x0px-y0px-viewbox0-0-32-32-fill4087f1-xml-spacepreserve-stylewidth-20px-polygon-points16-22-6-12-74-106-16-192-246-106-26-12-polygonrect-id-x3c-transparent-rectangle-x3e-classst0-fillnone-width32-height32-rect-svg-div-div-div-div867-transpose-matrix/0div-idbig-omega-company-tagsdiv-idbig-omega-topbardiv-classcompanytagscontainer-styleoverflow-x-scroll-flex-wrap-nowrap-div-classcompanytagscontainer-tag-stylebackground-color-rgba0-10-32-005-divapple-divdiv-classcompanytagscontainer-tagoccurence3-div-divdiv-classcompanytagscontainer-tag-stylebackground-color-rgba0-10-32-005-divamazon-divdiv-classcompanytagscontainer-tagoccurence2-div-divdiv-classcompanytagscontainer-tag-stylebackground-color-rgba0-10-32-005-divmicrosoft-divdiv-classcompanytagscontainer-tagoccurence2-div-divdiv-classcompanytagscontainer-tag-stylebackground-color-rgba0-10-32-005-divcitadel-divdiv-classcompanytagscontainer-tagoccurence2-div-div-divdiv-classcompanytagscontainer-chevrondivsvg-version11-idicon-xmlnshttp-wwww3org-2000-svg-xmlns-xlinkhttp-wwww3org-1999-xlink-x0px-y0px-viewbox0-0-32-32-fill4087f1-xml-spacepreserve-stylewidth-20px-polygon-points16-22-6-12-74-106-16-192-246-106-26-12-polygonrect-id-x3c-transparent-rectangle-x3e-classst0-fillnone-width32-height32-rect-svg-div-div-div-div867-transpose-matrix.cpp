// class Solution {
// public:
//     vector<vector<int>> transpose(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         for(int i = 0 ; i<n-1;i++)
//         {
//             for(int j = i+1;j<n;j++)
//             {
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }return matrix;
        
//     }
// };
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();    // Number of rows
        int n = matrix[0].size(); // Number of columns

        // Create a new matrix with swapped rows and columns
        vector<vector<int>> result(n,vector<int>(m, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[j][i] = matrix[i][j];
            }
        }

        return result;
    }
};