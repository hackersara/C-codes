#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int octal, decimal = 0, i = 0;
   cout << "Enter an octal number: ";
   cin >> octal;

   // converting octal to decimal
   while(octal != 0) {
      decimal += (octal % 10) * pow(8, i);
      ++i;
      octal /= 10;
   }

   cout << "Decimal number = " << decimal;
   return 0;
}
