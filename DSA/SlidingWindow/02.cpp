//Sliding Window + Swaps (Circular / Linear)

// https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/description/
// https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/ -2 ways-linear & binary
//
/* class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int windowSize=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1) windowSize++;
        }
        if(windowSize==0 || windowSize==n) return 0;
        //1st window
        int maxOnesInAWindow=0;
        for(int i=0;i<windowSize;i++){
            if(nums[i]==1) maxOnesInAWindow++;
        }
        int maxOnes=maxOnesInAWindow;
        int start=0;
        int end=windowSize;
        
        while(start<n){
            if(nums[end]==1) maxOnesInAWindow++;
            //if(nums[end%n]==1) maxOnesInAWindow++;
            if(nums[start]==1) maxOnesInAWindow--;
            maxOnes=max(maxOnes, maxOnesInAWindow);

            start++;
            end= (end+1)%n;
            //end++;
        }
        return windowSize-maxOnes;
    }
};*/
