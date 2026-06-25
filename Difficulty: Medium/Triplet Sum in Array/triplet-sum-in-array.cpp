class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        // brute force
        /*
        for(int i = 0; i < n - 2; i++){
            for(int j = i + 1; j < n - 1; j++){
                for(int k = j + 1; k < n; k++){
                    if(arr[i] + arr[j] + arr[k] == target){
                        return true;
                    }
                }
            }
        }
        return false;
        */
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n - 2; i++) {
            int findSum = target - arr[i];

            int low = i + 1;
            int high = n - 1;

            while (low < high) {
                if (arr[low] + arr[high] == findSum) return true;
                else if (arr[low] + arr[high] > findSum) high--;
                else low++;
            }
        }

        return false;
    }
};