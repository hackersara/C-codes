
#include <iostream>
using namespace std;

int sum(int n){
      // base case
  if (n == 1)
        return 1;

    // Recursive case: add the current number to the previous triangle number
    
    return n + sum(n - 1);// 4+3 we have done else recursion                               will do 
}

int main() {
   
   int n; //n=4
   cin>>n;
   
   cout<<sum(n);
   
   
   
   
   
    /*  without recursion  
    int n;
    cin>>n;
    int sum=0; 
    for(int i=1;i<=n;i++){
    sum=sum+i;//i will become 1 2 3 and keep on adding with prev. value of sum 
    }
   cout<<sum;   */
    
    

    return 0;
}
