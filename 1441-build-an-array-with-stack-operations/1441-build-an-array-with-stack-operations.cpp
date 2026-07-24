class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        vector<string> ans;
        int i = 0;

        for (int num = 1; num <= n; num++) {

            if (num == target[i]) {
                ans.push_back("Push");
                i++;

                if (i == target.size())
                    break;
            }
            else {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }

        return ans;
    }
};