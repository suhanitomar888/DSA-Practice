class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> charCount;

        for (char c : s) {
            charCount[c]++;
        }

        int length = 0;
        bool hasOdd = false;

        for (auto &it : charCount) {
            int count = it.second;
            if (count % 2 == 0) {
                length += count;
            } else {
                length += count - 1;
                hasOdd = true;
            }
        }

        if (hasOdd) {
            length += 1;
        }

        return length;     
    }
};