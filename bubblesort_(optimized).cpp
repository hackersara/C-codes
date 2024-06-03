#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
int swapped=0;
 for(int count=1;count<n;count++){ 
    for(int i=0;i<n-count;i++){ 
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            swapped=1;
        }
    }
    if(swapped==0){
        break;
    }
  }
}

void printarr(int arr[],int n ){
// [-10 -4 3 9 31 50 51 100]
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
}


int main(){
 int arr[]= {1,2,3,4,5,6,7};
 int  n= sizeof(arr)/sizeof(int);
 
 bubblesort(arr,n);
 printarr(arr,n);

}
