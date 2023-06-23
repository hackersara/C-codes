//bubble sort 
#include <iostream>
using namespace std;

int main() {
  
  int n;
  cin>>n;
  
  int arr[n];
  
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  
  // bubble sort 
  for(int co=0;co<n-1;co++)
  {
  for(int j=0;j<n-co;j++){
      if(arr[j]>arr[j+1]) 
      {
      swap(arr[j],arr[j+1]);
      }
  }
  }
  
  for(int x=0;x<n;x++){
      cout<<arr[x]<<" ";
  }
  
  

    return 0;
}
