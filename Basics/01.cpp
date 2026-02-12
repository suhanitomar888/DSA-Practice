// a to z using typecasting
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

//program to check whether a number is even or odd
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<n<<" is even number"<<endl;
    }
    else{
        cout<<n<<" is odd number"<<endl;
    }
}
*/

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
}
*/

//calculate the sum of 1 to n numbers
/*
// Time complexity: O(n)
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
*/

// Time complexity: O(1) (Optimal approach)- using long long to handle large sums
/*#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}
*/

// sum of first n even numbers in most optimal way 
//time complexity: O(1)
//even=2n , odd= 2n+1
/*#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int sum = n * (n + 1); 
    cout << "Sum of first " << n << " even numbers is: " << sum << endl;
    return 0;
}
*/
