class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls=0;
        int ts=0;
        for(int i=0;i<nums.size();i++){
            ts+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int rs=ts-ls-nums[i];
            if(ls==rs)return i;
            ls+=nums[i];
        }
        return -1;
    }
};