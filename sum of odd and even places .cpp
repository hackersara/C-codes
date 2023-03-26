
#include<iostream>
using namespace std;
int main() {
    int n,x=1,odd=0,even=0,a;
    cin>>n;
    while(n>0)
    {
        a=n%10;
        if(x%2==0)
        {
            even=even+a;
        }
        else
        {
            odd=odd+a;
        }
        x++;
        n=n/10;
    }
    cout<<odd<<endl;
    cout<<even;
	    return 0;
}

/*This program takes an integer input n and then finds the sum of the odd and even digits of n. The sum of the odd digits is printed first, followed by the sum of the even digits.

Explanation:

We first declare and initialize some integer variables n, x, odd, even, and a.
n is the integer input taken from the user, x is used to keep track of the position of the digit (odd or even), odd and even are used to keep track of the sum of the odd and even digits, and a is used to store the last digit of n in each iteration of the loop.
We then use a while loop to iterate through each digit of n.
In each iteration, we get the last digit of n using the modulus operator % and store it in a. We then check if x is odd or even using the condition x%2==0. If x is even, we add a to even. Otherwise, we add a to odd.
We then update the value of x by incrementing it by 1, and update the value of n by dividing it by 10 to remove the last digit.
After the loop completes, we print the values of odd and even to the console as the output.
Note: This program assumes that the input n is a positive integer. If the input may contain negative integers or non-integer values, additional input validation and error handling code may be needed.
