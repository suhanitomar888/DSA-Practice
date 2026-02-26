//Sliding Window + “Good/Bad” concept (GFG)

// https://www.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1
/*
class Solution {
public:
    int minSwap(vector<int>& arr, int k) {
        int n = arr.size();

        int windowSize = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] <= k) windowSize++;
        }

        if(windowSize == 0 || windowSize == n) return 0;

        int numsLessThan = 0;
        for(int i = 0; i < windowSize; i++) {
            if(arr[i] <= k) numsLessThan++;
        }

        int maxNumsLessThan = numsLessThan;

        int start = 0;
        int end = windowSize;

        while(end < n) {
            if(arr[end] <= k) numsLessThan++;
            if(arr[start] <= k) numsLessThan--;

            maxNumsLessThan = max(maxNumsLessThan, numsLessThan);

            start++;
            end++;
        }

        return windowSize - maxNumsLessThan;
    }
};
*/
