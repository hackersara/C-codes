// binary to decimal 

#include <iostream>
using namespace std;
int main() {
    
    int num,rem,b=1,decimal_digit=0; 
    cin>>num;// 1011
    
    while(num>0)
    {
    rem=num%10; // 1
    decimal_digit=decimal_digit+rem*b;// 1
    b=b*2; //2
    num=num/10; //101
    }
    
    cout<<decimal_digit;

    return 0;
}
