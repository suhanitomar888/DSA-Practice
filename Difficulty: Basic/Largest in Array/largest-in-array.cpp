class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        //run a loop on size of array{
            //if(the ith element is greater than largest){
                //update the largest
            //}
            //return largest
        //}
        
        int l= INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>l){
                l=arr[i];
            }
        }
        return l;
    }
};
