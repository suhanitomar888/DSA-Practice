//Pair sum / Triplet sum / Sorting + pointers

// https://www.geeksforgeeks.org/problems/key-pair5616/1

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
