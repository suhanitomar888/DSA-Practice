class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        stack<int>st;
        vector<int>nge(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
            }
            if(st.empty()) nge[i] = -1;
            else nge[i] = st.top();
            st.push(arr[i]);
        }
        return nge;
    }
};
/*class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n, -1);
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(arr[j] > arr[i]) {
                    ans[i] = arr[j];
                    break;
                }
            }
        }
        return ans;
    }
};*/