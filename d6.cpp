// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
// https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/ -2 ways-linear & binary
//
/* class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int windowSize=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1) windowSize++;
        }
        if(windowSize==0 || windowSize==n) return 0;
        //1st window
        int maxOnesInAWindow=0;
        for(int i=0;i<windowSize;i++){
            if(nums[i]==1) maxOnesInAWindow++;
        }
        int maxOnes=maxOnesInAWindow;
        int start=0;
        int end=windowSize;
        
        while(start<n){
            if(nums[end]==1) maxOnesInAWindow++;
            //if(nums[end%n]==1) maxOnesInAWindow++;
            if(nums[start]==1) maxOnesInAWindow--;
            maxOnes=max(maxOnes, maxOnesInAWindow);

            start++;
            end= (end+1)%n;
            //end++;
        }
        return windowSize-maxOnes;
    }
};*/
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