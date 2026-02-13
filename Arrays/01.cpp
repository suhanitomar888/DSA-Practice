//Two Pointers / In-place / Array manipulation


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

// https://leetcode.com/problems/reverse-array-in-groups0255/1
// (LINK ONLY - solve later)

// insert 5 at a[3] in a= 1,3,6,8,9,4 using insertion at last
// (BASIC QUESTION LINK/NOTE ONLY)

//reverese the array 1, 5,4,3,2
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

//reverese the array 1, 5,4,3,2 using for loop
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

// https://leetcode.com/problems/move-zeroes/description/
// (LINK ONLY - solve later)
