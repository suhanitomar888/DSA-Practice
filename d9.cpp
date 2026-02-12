// Aggressive cows
/*class Solution {
  public:
    bool isPossible(vector<int> &stalls, int k, int dist){
        int cows=1;
        int lastStallPos=stalls[0];
    
        for(int i=1;i<stalls.size();i++){
            if(stalls[i]-lastStallPos>= dist){
                cows++;
                lastStallPos=stalls[i];
            }
            if(cows>=k) return true;
        }
        return false;
    }
    
 
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(), stalls.end());
        int ans=0;
        int low=1;
        int high=stalls.back()-stalls.front();
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isPossible(stalls, k, mid)) {
                ans = mid;
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        return ans;
        
    }
};*/
// https://leetcode.com/problems/longest-palindromic-substring/
// https://www.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1
// https://leetcode.com/problems/valid-palindrome/description/
// https://leetcode.com/problems/valid-palindrome-ii/
// https://leetcode.com/problems/find-all-anagrams-in-a-string/description/
// https://leetcode.com/problems/is-subsequence/description/
