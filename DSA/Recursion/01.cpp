//Basic Recursion (Factorial, Fibonacci, Sum)

// 1) Factorial using recursion
/*class Solution {
  public:
    int factorial(int n) {
        // code here
        if(n==0)return 1;
        return n*factorial(n-1);
    }
};*/
// 2) Fibonacci using recursion
/*class Solution {
  public:
    int fib(int n) {
        // code here
        if(n==0)return 0;
        if(n==1)return 1;
        return fib(n-1)+fib(n-2);
    }
};*/
// 3) Sum of 1 to n using recursion
/*class Solution {
  public:
    int sum(int n) {
        // code here
        if(n==0)return 0;
        return n+sum(n-1);
    }
};*/
// 4) Power (a^b) using recursion
/*class Solution {
  public:
    long long power(int a, int b) {
        // code here
        if(b==0)return 1;
        return a*power(a,b-1);
    }
};*/
// 5) Print 1 to n using recursion
/*class Solution {
  public:
    void printNos(int n) {
        // code here
        if(n==0)return;
        printNos(n-1);
        cout<<n<<" ";
    }
};*/
// 6) Print n to 1 using recursion
/*class Solution {
  public:
    void printNos(int n) {
        // code here
        if(n==0)return;
        cout<<n<<" ";
        printNos(n-1);
    }
};*/
