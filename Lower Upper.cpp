
#include <iostream>
using namespace std;
int main() {
    
    char alph;
    cin>>alph;
    
    if(alph>='a' && alph<='d'){
        cout<<"lowercase";
    }
    else if(alph>='A' && alph<='D'){
         cout<<"uppercase";
    }
    else{
        cout<<"invalid";
    }
    
    
    
    return 0;
}
