#include <iostream>
using namespace std;
int main(){

 int n1,n2;
 cin>>n1>>n2;

for(int i=1;i<100000;i++){
if(i%n1==0 && i%n2==0){
    cout<<"The L.C.M. is "<<i<<endl;
    break;
    }
}
    return 0;
}
