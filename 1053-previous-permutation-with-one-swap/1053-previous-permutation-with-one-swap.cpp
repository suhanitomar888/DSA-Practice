class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return arr;

        // Step 1: find breakpoint
        int i = n - 1;
        while(i > 0 && arr[i-1] <= arr[i]) {
            i--;
        }

        // already smallest
        if(i == 0) return arr;

        // Step 2: find best candidate
        int idx = i;
        for(int k = i; k < n; k++) {
            if(arr[k] < arr[i-1] && arr[k] > arr[idx]) {
                idx = k;
            }
        }

        // Step 3: swap
        swap(arr[i-1], arr[idx]);

        return arr;
    }
};