//Binary Search on Answer (Optimization)

// https://leetcode.com/problems/koko-eating-bananas/

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
