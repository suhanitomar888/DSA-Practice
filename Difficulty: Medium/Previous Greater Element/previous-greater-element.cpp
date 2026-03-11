class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        int n=arr.size();
        stack<int> st;
        vector<int> pge(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty())pge[i]=-1;
            else pge[i]=st.top();
            st.push(arr[i]);
        }
        return pge;
    }
};
