//After the bubble sort algorithm completes, the kth largest element is accessed from the sorted array using arr[n-key]. Since the array is sorted in ascending order, the kth largest element will be at the index n-key (assuming 1-based indexing).
#include<iostream>
using namespace std;

int main() {
	int n , key;
	cin>>n;
	cin>>key;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int co=1 ; co<=n-1 ; co++){
		for(int j=0 ;j<= n-co-1 ; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}

	cout<<arr[n-key];

	return 0;
}
