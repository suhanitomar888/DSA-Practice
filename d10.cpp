// reverse characters in a string
/*
class Solution {
    public:
        void reverseString(vector<char> &s) {
            int left = 0;
            int right = s.size() - 1;
    
            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
    };
*/
// reverse a string(both words and their char)
/*class Solution {
    public:
        string reverseString(string s) {
            int left = 0;
            int right = s.size() - 1;
    
            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            return s;
        }
    };
*/
// reverse words in a string
/*class Solution{
    public:
        string reverseWords(string s) {
            int n = s.size();
            int left = 0;
            int right = n - 1;

            // Step 1: Remove leading spaces
            while (left < n && s[left] == ' ') {
                left++;
            }

            // Step 2: Remove trailing spaces
            while (right >= 0 && s[right] == ' ') {
                right--;
            }

            // Step 3: Reverse the entire string
            reverse(s.begin() + left, s.begin() + right + 1);

            // Step 4: Reverse each word in the string
            int start = left;
            for (int i = left; i <= right; i++) {
                if (s[i] == ' ') {
                    reverse(s.begin() + start, s.begin() + i);
                    start = i + 1;
                }
            }
            // Reverse the last word
            reverse(s.begin() + start, s.begin() + right + 1);

            // Step 5: Clean up spaces between words
            string result;
            for (int i = left; i <= right; i++) {
                if (s[i] != ' ' || (i > left && s[i - 1] != ' ')) {
                    result += s[i];
                }
            }

            return result;
        }
    };
*/
// https://leetcode.com/problems/reverse-words-in-a-string/description/
// https://leetcode.com/problems/reverse-string/
// https://www.geeksforgeeks.org/problems/non-repeating-character-1587115620/1
// https://leetcode.com/problems/first-unique-character-in-a-string/
// https://www.geeksforgeeks.org/problems/find-first-repeated-character4108/1
// https://leetcode.com/problems/add-strings/description/
// https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1
// https://www.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1

// boundary traversal of matrix
class Solution {
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

