//Functions + Pass by reference


//call by reference using reference variable
/*#include <iostream>
using namespace std;
int main() {
    int x=10;
    int& myref=x; //reference variable
    cout<<x<<endl;
    cout<<"initial value"<<myref<<endl;
    x=20;
    cout<<"value of myref<<: "<<myref<<endl;
    return 0;
}
*/

//fn in cpp- make sure the return type is same as the data type of value being returned
// if fn is int calculator(int a, int b) then return type should be int
// if fn is void printMessage() then return type should be void like this
/*#include <iostream>
using namespace std;
void printMessage() {
    cout << "Hello" << endl;
}
int main() {
    printMessage(); // Function call
    return 0;
}
*/

//input n number nd then write its table till 10
/*#include<iostream>
using namespace std;
void table(int n){
    for(int i=0;i<=10;i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    table(n);
    return 0;
}
*/

//take input x nd then change its value to 5 by pass by reference
/*#include <iostream>
using namespace std;

void Incrementfun(int &x) {
    x+=5;
} 
int main() {
    int x;
    cin >> x;
    Incrementfun(x);
    cout <<x << endl;
    return 0;
}
*/

//square of a number using fn by reference
/*#include <iostream>
using namespace std;
void square(int &n) {
    n = n * n;
}
int main() {
    int n;
    cin >> n;
    square(n);
    cout << "Square: " << n << endl;
    return 0;
}
*/
