//Kadane / Subarray

// https://leetcode.com/problems/maximum-sum-circular-subarray/description/
/*class Solution {
public:
    int kadaneMax(vector<int>& nums, int n) {
        int currSum = nums[0];
        int maxSum = nums[0];
        for(int i = 1; i < n; i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }

    int kadaneMin(vector<int>& nums, int n) {
        int currSum = nums[0];
        int minSum = nums[0];
        for(int i = 1; i < n; i++) {
            currSum = min(nums[i], currSum + nums[i]);
            minSum = min(minSum, currSum);
        }
        return minSum;
    }

    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int maxSum = kadaneMax(nums, n);

        int totalSum = 0;
        for(int i = 0; i < n; i++) totalSum += nums[i];

        int minSum = kadaneMin(nums, n);
        int circularSum = totalSum - minSum;

        if(maxSum < 0) return maxSum;
        return max(maxSum, circularSum);
    }
};
*/
