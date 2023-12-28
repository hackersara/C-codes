
#include <iostream>
using namespace std;
int main() {
    int tr;
    cin>>tr;
    
    int rowno=1;
    int k=0;
    while(k<tr){
        
    int i=0;
    while(i<rowno){
        cout<<"*";
        i++;
        
    }
    
    int j=0;
    while(j<tr-rowno){
        cout<<" ";
        j++;
        
    }
    cout<<endl;
    k++;
    rowno++;
    }
    

    return 0;
}
