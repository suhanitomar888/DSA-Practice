// Palindrome + Subsequence + Anagrams (Links only)

// https://leetcode.com/problems/longest-palindromic-substring/
// https://www.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1
// https://leetcode.com/problems/valid-palindrome/description/
// https://leetcode.com/problems/valid-palindrome-ii/
// https://leetcode.com/problems/find-all-anagrams-in-a-string/description/
// https://leetcode.com/problems/is-subsequence/description/

/*class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string original=s;
        int i=0;
        int j=s.size()-1;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        if(s==original)return true;
        else return false;
    }
};*/
/*class Solution{
public:
    bool isPalindrome(string s){
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s){
    string t = s;
    reverse(t.begin(), t.end());

    if(t == s) return true;
    return false;
    }
};*/