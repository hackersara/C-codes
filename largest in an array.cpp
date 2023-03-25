// LARGEST ELEMENT IN AN ARRAY 
#include <iostream>
using namespace std;
int main() {
   
   
   int n;
   cin>>n;
   int arr[n];
   
   // input in an array 
   
   for(int i=0; i<=n-1;i++)
   {
      cin>>arr[i];
   }
   
   // largest in an array 
   
   int largest =arr[0];
   
   for(int i=0 ;i<=n-1;i++ )
   {
     if(largest<arr[i])
     {
        largest=arr[i]; 
     }
   }
    cout<<"largest no. is" <<" "<<largest;
    
   return 0;
}
