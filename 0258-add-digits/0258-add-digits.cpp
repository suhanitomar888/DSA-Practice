class Solution {
public:
    int helper(int n){
        int sum=0;
        while(n>0){
            int ld=n%10;
            sum+=ld;
            n=n/10;
        }
        if(sum<=9)return sum;
        else return helper(sum);
    }
    int addDigits(int n){
        return helper(n);
    }
};