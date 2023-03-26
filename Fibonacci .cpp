/*We first take the input value of n from the user.
We declare three integer variables - a, b, and c - to hold the values of the first two Fibonacci numbers and the sum of the previous two numbers, respectively.
We initialize a to 0 and b to 1, as these are the first two Fibonacci numbers.
We use a for loop to compute the next Fibonacci numbers up to the nth number.
Within the loop, we compute c as the sum of a and b, and update a and b accordingly to prepare for the next iteration.
After the loop completes, b holds the value of the nth Fibonacci number.
We print the value of b to the console as the output.
We also handle the special case where n is 0, which is not covered by the for loop. In this case, we simply print 0 as the output.*/



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    
    if (n == 0)
        cout << "0\n";
    else
        cout << b << endl;

    return 0;
}
