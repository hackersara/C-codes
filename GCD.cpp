/*We first define a function gcd that takes two integer parameters a and b, and returns their GCD using the Euclidean algorithm.
In the gcd function, we first check if b is 0. If it is, then we have found the GCD and return a.
If b is not 0, we call the gcd function recursively with b and a % b.
In the main function, we take input of two integers n1 and n2.
We then call the gcd function with n1 and n2 as arguments, and store the result in a variable result.
Finally, we print a message along with the input values and the GCD value to the console as the output.*/




#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    int result = gcd(n1, n2);
    cout << "The GCD of " << n1 << " and " << n2 << " is " << result << endl;

    return 0;
}
