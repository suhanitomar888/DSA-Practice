//Traversal Patterns (Boundary / Snake)

// https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1
// https://www.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1

// boundary traversal of matrix
/*class Solution {
    public:
        vector<int> boundaryTraversal(vector<vector<int>> &matrix, int n, int m) {
            vector<int> result;

            // Single row case
            if (n == 1) {
                for (int j = 0; j < m; j++) {
                    result.push_back(matrix[0][j]);
                }
                return result;
            }

            // Single column case
            if (m == 1) {
                for (int i = 0; i < n; i++) {
                    result.push_back(matrix[i][0]);
                }
                return result;
            }

            // Top row
            for (int j = 0; j < m; j++) {
                result.push_back(matrix[0][j]);
            }

            // Right column
            for (int i = 1; i < n; i++) {
                result.push_back(matrix[i][m - 1]);
            }

            // Bottom row
            for (int j = m - 2; j >= 0; j--) {
                result.push_back(matrix[n - 1][j]);
            }

            // Left column
            for (int i = n - 2; i > 0; i--) {
                result.push_back(matrix[i][0]);
            }

            return result;
        }
    };
*/
