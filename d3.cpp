//print patterns
/*
#include<iostream>
using namespace std;
int main(){
    int n;              
    cin >> n;           
    for(int i = 1; i <= n; i++){           
        for(int j = 1; j <= n-1; j++){     
            cout << " ";                   
        }
        for(int k = 1; k <= 2*i-1; k++){   
            cout << "*";                   
        }
        cout << endl;                    
    }
}*/
//inverted pyramid pattern
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2*i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}
*/
// insert 5 at a[3] in a= 1,3,6,8,9,4 using insertion at last
//reverese the array 1, 5,4,3,2
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
//reverese the array 1, 5,4,3,2 using for loop
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/
// given an array 0 1 0 1 1 0 0 1 1 1 1, maximum no. of 1 that can be arranged together
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0, maxCount = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }
    cout << maxCount;
    return 0;
}
*/
//given a binary array, shift all the 0 to last nd 1 at front
/*#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0; // Count of 1's

    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            arr[count++] = 1; // Place 1 at the count index
        }
    }
    while(count < n) {
        arr[count++] = 0; // Fill remaining positions with 0
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}*/
//given an array,pick B numbers such that their sum is maximum, those no. can only be taken from right and left ens in consecutive manner, not from in between
/*#include <iostream>
using namespace std;
int main() {
    int n, B;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> B;

    int leftSum = 0;
    for(int i = 0; i < B; i++) {
        leftSum += arr[i];
    }

    int maxSum = leftSum;
    int rightSum = 0;

    for(int i = 0; i < B; i++) {
    }
    cout << maxSum << endl;
    return 0;
}*/
//filled rectangle pattern
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        for(int k=0;k<n;k++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;           
}*/

