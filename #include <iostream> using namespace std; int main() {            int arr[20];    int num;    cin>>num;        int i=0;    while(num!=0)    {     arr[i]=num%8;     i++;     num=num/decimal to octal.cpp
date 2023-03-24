/* #include <iostream>: This is a preprocessor directive that includes the iostream library, which provides input/output capabilities.

using namespace std;: This line tells the compiler to use the standard namespace, which contains various C++ standard library functions.

int main() {: This is the main function of the program, which is the starting point of execution.

int x, d[20], i = 0;: This line declares three integer variables: x for the input decimal number, d for the octal number, and i as a loop counter.

cin >> x;: This line takes an integer input from the user and stores it in the variable x.

while (x != 0) {: This loop continues until the decimal number becomes zero.

d[i] = x % 8;: This line calculates the remainder when x is divided by 8, which is the octal equivalent of the last digit of the decimal number. It then stores the remainder in the d array at the current index i.

i++;: This line increments the index i to store the next octal digit.

x = x / 8;: This line updates the value of x by dividing it by 8, which moves the decimal point one place to the left and effectively removes the last digit of the decimal number.

}: This line marks the end of the while loop.

i = i - 1;: This line decrements the index i to point to the last octal digit stored in the array.

while (i >= 0) {: This loop prints the octal digits stored in the d array in reverse order.

cout << d[i];: This line prints the octal digit at index i to the console.

i--;: This line decrements the index i to print the next octal digit.

}: This line marks the end of the while loop.

return 0;: This line ends the main function and returns the value 0 to the operating system to indicate successful completion of the program.
*/





#include <iostream>
using namespace std;
int main() {
   
   
   int arr[20];
   int num;
   cin>>num;
   
   int i=0;
   while(num!=0)
   {
    arr[i]=num%8;
    i++;
    num=num/8;
   }

i=i-1;
while(i>=0)
{
    cout<<arr[i];
    i--;
}


    return 0;
}
