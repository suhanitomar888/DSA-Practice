class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int l=INT_MIN;
        int sl=INT_MIN;
        
        for(int i:arr){
            if(i>l){
                sl=l;
                l=i;
            }
            else if(i>sl && i<l){
                sl=i;
            }
        }
        return sl==INT_MIN ? -1:sl;
    }
};