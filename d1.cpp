//a to z using typecasting
/*
#include <iostream>
using namespace std;
int main() {
    char a = 'a';
    int x = (int)a;   // typecast char to int
    for(int i = 0; i < 26; i++) {
        cout << (char)x << " ";
        x++;   // increment integer value
    }

    return 0;
}
*/
//remove duplicates
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                for(int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}*/
//check whether a number is prime number or not
/*
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool isPrime = true;
    if(n <= 1) {
        isPrime = false;
    } else {
        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}*/
// 2nd highest number in a sorted array
/*#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Second highest number is: " << arr[n - 2] << endl;
    return 0;
}*/
//2nd largest number in an unsorted array
/*#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            firstLargest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if(secondLargest == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "Second largest number is: " << secondLargest << endl;
    }
    return 0;
}*/