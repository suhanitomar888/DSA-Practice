class Solution {
public:
    int helper(int num){
        vector<int>newNum;
        while(num>0){
            int ld=num%10;
            newNum.push_back(ld);
            num=num/10;
        }
        int sum=0;
        for(int i=0;i<newNum.size();i++){
            sum+=newNum[i];
        }
        if(sum<=9)return sum;
        else return helper(sum);
    }
    int addDigits(int num){
        return helper(num);
    }
};