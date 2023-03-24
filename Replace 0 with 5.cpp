/*The program takes an integer input from the user and stores it in the variable n.

The variable new_num is initialized to 0, which will store the new number after replacing all 0's with 5's.

The variable i is initialized to 1, which will be used to construct the new number digit by digit.

A while loop is used to extract each digit from the original number and replace 0's with 5's.

The modulus operator (%) is used to extract the last digit of the number.

If the digit is 0, it is replaced with 5.

The new digit is added to new_num using the formula new_num = new_num + digit * i, where i is used to position the digit in the new number.

i is then multiplied by 10 to move to the next position.

The original number is divided by 10 to discard the last digit and move on to the next.

Once all digits have been processed, the new number is printed to the console.

The program ends by returning 0 to the operating system. */

#include <iostream>
using namespace std;

int main() {
   int n;
   cin >> n;
   int new_num = 0;
   int i = 1;

   while(n > 0) {
      int digit = n % 10;
      if (digit == 0) {
         digit = 5;
      }
      new_num = new_num + digit * i;
      i = i * 10;
      n = n / 10;
   }

   cout << "New number after replacing all 0's with 5's: " << new_num << endl;
   return 0;
}
