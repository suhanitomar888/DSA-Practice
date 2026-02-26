//Basic counting / traversal logic


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
