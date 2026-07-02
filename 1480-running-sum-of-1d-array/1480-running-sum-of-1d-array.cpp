class Solution {
public:
    vector<int> runningSum(vector<int>& nums){
        vector<int>nn;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            nn.push_back(sum);
        }
        return nn;
    }
};