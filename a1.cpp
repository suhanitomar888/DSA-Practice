// https://leetcode.com/problems/merge-sorted-array/description/
/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;         
        int j = n - 1;         
        int last = m + n - 1;  

        while(i >= 0 && j >= 0) {
            if(nums1[i] > nums2[j]) {
                nums1[last] = nums1[i];
                i--;
            } else {
                nums1[last] = nums2[j];
                j--;
            }
            last--;
        }

        while(j >= 0) {
            nums1[last] = nums2[j];
            j--;
            last--;
        }
    }
};
*/
// https://www.geeksforgeeks.org/problems/common-elements1132/1

// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1
// https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/description/

// find 2nd max, 2nd min- type of basic questions