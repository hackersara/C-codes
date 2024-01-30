#include <iostream>
using namespace std;
int main() {
  
  int N1,N2;
  cin>>N1>>N2;
  int i=1;
  //3n+2
 while(N1>0)
 {
    int num= (3*i)+2;
    
    if(num%N2 !=0){
        cout<<num<<endl;
       N1--;
    }
    i++;
 }
    return 0;
}
