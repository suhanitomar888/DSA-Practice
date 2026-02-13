//Reverse (Two pointers)
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
