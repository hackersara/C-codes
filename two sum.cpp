// without using vector 
#include <iostream>
using namespace std;
void target(int* arr,int t,int n)
{
 for(int x=0;x<=n-1;x++){// this loop will fix the first value(that needs to be added with other values) will fix 2 and other with other digits of array 
     for(int y=0;y<=n-1;y++){
     if((arr[x]+arr[y])==t){
         cout<<x<<" "<<y;
         return ;
     }
     else{
         y++;
        }
    }   
 }  
}

int main(){

int n ;
cin>>n;
int arr[n];

for(int i=0;i<=n-1;i++){
    cin>>arr[i];//2 7 11 5 
}
int t; // target
cin>>t;

target(arr,t,n);
    return 0;
}
//
