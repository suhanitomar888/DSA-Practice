//Reverse Words in a String (String manipulation)

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
