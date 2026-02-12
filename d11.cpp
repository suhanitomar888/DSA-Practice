// https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/1908884153/
// Use recursion and print all no. from 1 to n;
//factorial of a number n
 /*int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
 }*/
// print 0 to n-1 using recursion
/*int printN(int n){
    if(n==0){
        return 0;
    }
    printN(n-1);
    cout<<n-1<<" ";
    return 0;
}
int main(){
    int n;
    cin>>n;
    printN(n);
    return 0;
}*/
// print arr= 5 4 9 3 2 1 using recursion in same order
/*#include<iostream>
using namespace std;    
int printNums(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    printNums(n-1);
    return 0;
}
int main(){ 
    int n;
    cin>>n;
    printNums(n);
    return 0;
}*/

/*#include <iostream>
using namespace std;

void printArr(int arr[], int i) {
    if (i<0) return ;

    cout << arr[i] << " ";
    return printArr(arr, i-1);
}*/

