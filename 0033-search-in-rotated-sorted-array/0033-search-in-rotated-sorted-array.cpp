class Solution{
public:
    int search(vector<int>& arr, int target){
        int low=0;
        int high=arr.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target)return mid;
            else if(arr[low]<=arr[mid]){
                if(arr[low]<=target && arr[mid]>=target){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(arr[high]>=target && arr[mid]<=target){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};





/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target)return mid;
            if(nums[low]<=nums[mid]) {
                if(nums[low]<=target&&target<nums[mid])
                    high=mid-1;
                else
                    low=mid+1;
            }
            else{
                if(nums[mid]<target&&target<=nums[high])
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return -1;
    }
};
*/ 