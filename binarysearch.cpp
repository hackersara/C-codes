#include<iostream>
#include<string>
using namespace std;
bool binarysearch(int arr[],int s,int e,int key){
	// int s=0;
	// int e=n-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			cout<<"key is present at "<< mid <<endl;
			return true;
		}
		else if(key>arr[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}

	}
	
	return false;
}
int main(){
	int arr[]={2,3,5,6,8,9,11};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	if(binarysearch(arr,0,n-1,key)==false){
		cout<<"elemrnt is not prsent"<<endl;
	}
	return 0;
}

//Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. 
//The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N). 
https://www.geeksforgeeks.org/binary-search/
