class Solution {
public:
    bool palindromeHelper(string &s, int l, int r){
        while(l<r){
            if(s[l++]!=s[r--])return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l=0;
        int r=s.length()-1;
        while(l<r){
            //if the value on both pointer are equal then simply move the pointer
            if(s[l]==s[r]){
                l++;
                r--;
            }else{
                return palindromeHelper(s, l+1,r)|| palindromeHelper(s,l,r-1);
            }
        }
        return true;
    }
};