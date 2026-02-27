class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

/*class Solution {
public:
void rotate(vector<int>& nums, int k) {
int n=nums.size();

if(n==0 || k==0)
return;

k=k%n; // handles rotation if k>=n --- extra rotations avoided
vector<int> temp;
for (int i=n-k;i<n;i=i+1)
temp.push_back(nums[i]); // backed up k elements in order from last
int last=n-1;
int count=n-k;
while(count--)
{
nums[last]=nums[last-k];
last--;
}
for (int i=0;i<k;i=i+1)
nums[i]=temp[i];

}
};

class Solution {
public:
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    while (k--) {
        int last = n - 1;
        int backup = nums[last];
        for (int i = last; i >= 1; i--)
            nums[i] = nums[i - 1];
        nums[0] = backup;
    }
}
};
*/
/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();

        if(n==0 || k==0)
        return;

        k=k%n; // handles rotation if k>=n --- extra rotations avoided
        vector<int> temp;
        for (int i=n-k;i<n;i=i+1)
        temp.push_back(nums[i]); // backed up k elements in order from last
        int last=n-1;
        int count=n-k;
        while(count--)
        {
            nums[last]=nums[last-k];
            last--;
        }
        for (int i=0;i<k;i=i+1)
        nums[i]=temp[i];
    }
};
*/
