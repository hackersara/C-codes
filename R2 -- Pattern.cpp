
#include <iostream>
using namespace std;
int main() {
    
   int n;
   cin>>n;
   
   int i=n-1;
   while(i>=1){
       cout<<i<<endl;
       i=i-2;
   }
   
   int j=i+3;
   while(j<=n){
       cout<<j<<endl;
       j=j+2;
   }
 return 0;
}
