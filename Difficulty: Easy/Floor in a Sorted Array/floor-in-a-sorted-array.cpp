class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int ans=-1;
        int l=0;
        int r=arr.size()-1;
        while (l<=r){
            int mid=(l+r)/2;
            if(arr[mid]>x){
                r= mid-1;
            }
            else if(arr[mid]<=x){
                ans=mid;
                l=mid+1;
            }
        }
        return ans;
    }
};
