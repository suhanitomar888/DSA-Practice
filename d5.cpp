/*

Arrays- 2/3 pointers Problems-
1. https://leetcode.com/problems/move-zeroes/description/
2. https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
3. https://www.geeksforgeeks.org/problems/key-pair5616/1
4. https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
5. https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
6.https://www.geeksforgeeks.org/problems/pair-sum-in-a-sorted-and-rotated-array/1
7.https://leetcode.com/problems/merge-sorted-array/descri ption/
8. https://leetcode.com/problems/sort-colors/description/
9.https://www.geeksforgeeks.org/problems/common-elements1132/1
*/

// https://leetcode.com/problems/sort-colors/
/*class Solution {
public:
    void sortColors(vector<int>& arr) {
        int low=0;
        int curr=0;
        int high=arr.size()-1;

        while(curr<=high){
            if(arr[curr]==0){
                swap(arr[low], arr[curr]);
                curr++;
                low++;
            }
            else if(arr[curr]==1) curr++;
            else{
                swap(arr[curr], arr[high]);
                high--;
            }
        }
    }
};
*/
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
/*class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int k=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[k]){
                k++;
                nums[k]=nums[i];
            }
        }
        return k+1;
    }
};*/
// https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1
/*
class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        for(int i = 0; i < n - 2; i++){
            int findSum = target-arr[i];
            
            int low=i+1;
            int high=n-1;
            
            while(low<=high){
                if(arr[low]+ arr[high]==findSum) return true;
                else if(arr[low]+arr[high]= findingSum) high--;
                else low--;
            }
        }
        return false;
    }
};
*/
// https://www.geeksforgeeks.org/problems/pair-sum-in-a-sorted-and-rotated-array/1
/*
// User function Template for C++

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int smallest=0;
        int largest=0;
        int n=arr.size();
        
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                largest=i;
                smallest=i+1;
                break;
            }
        }
        
        while(smallest!=largest){
            if(arr[smallest]+arr[largest]==target) return true;
            else if((arr[smallest] + arr[largest]) < target)  smallest=(smallest+1)%n;
            else largest=(largest-1+n)%n;
        }
        return false;
    }
};*/
// https://www.geeksforgeeks.org/problems/common-elements1132/1
// https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1
