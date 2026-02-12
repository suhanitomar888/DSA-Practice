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
// https://leetcode.com/problems/binary-search/description/
// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array
// https://leetcode.com/problems/search-insert-position/
// https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1 
// https://www.geeksforgeeks.org/problems/ceil-in-a-sorted-array/1
// 852
// 