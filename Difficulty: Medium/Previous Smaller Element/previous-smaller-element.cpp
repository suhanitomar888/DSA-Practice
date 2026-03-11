class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        int n=arr.size();
        stack<int> st;
        vector<int> pse(n);
        
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                pse[i]=-1;
            }
            else{
                pse[i]=st.top();
            }
            st.push(arr[i]);
        }
        return pse;
    }
};