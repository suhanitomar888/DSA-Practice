class Solution {
public:
    int helper(int num) {
        int sum=0;
        while(num>0){
            int ld=num%10;
            sum+=ld;
            num=num/10;
        }
        if(sum<=9)return sum;
        else return helper(sum);
    }

    int addDigits(int num) {
        return helper(num);
    }
};