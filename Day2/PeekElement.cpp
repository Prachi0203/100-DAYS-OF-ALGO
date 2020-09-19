#include<bits/stdc++.h>
using namespace std;
int peekElement(int a[],int l,int h){
	int mid;
	mid = (l+h)/2;
	while(mid==h){
	if(a[mid]>a[mid-1]&&a[mid]<a[mid+1]){
		return a[mid];
		continue;
	}else if(mid ==0 &&a[mid+1]<a[mid]){
		return a[mid];continue;
	}else if(mid ==h-1 &&a[mid-1]<a[mid]){
		return a[mid];continue;
	}else{
		 peekElement(a,l,mid-1);
		 peekElement(a,mid+1,h);
	}
}
}
int main(){
	int n;cin>>n;int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	 cout<<peekElement(a,0,n);
	 return 0;
}
/*
// A C++ program to find a peak element 
// using divide and conquer 
#include <bits/stdc++.h> 
using namespace std; 

// A binary search based function 
// that returns index of a peak element 
int findPeakUtil(int arr[], int low, 
				int high, int n) 
{ 
	// Find index of middle element 
	// (low + high)/2 
	int mid =  (high - low) / 2; 

	// Compare middle element with its 
	// neighbours (if neighbours exist) 
	if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
		(mid == n - 1 ||arr[mid + 1] <= arr[mid])) 
		return mid; 

	// If middle element is not peak and its 
	// left neighbour is greater than it, 
	// then left half must have a peak element 
	else if (mid > 0 && arr[mid - 1] > arr[mid]) 
		return findPeakUtil(arr, low, (mid - 1), n); 

	// If middle element is not peak and its 
	// right neighbour is greater than it, 
	// then right half must have a peak element 
	else
		return findPeakUtil( 
			arr, (mid + 1), high, n); 
} 

// A wrapper over recursive function findPeakUtil() 
int findPeak(int arr[], int n) 
{ 
	return findPeakUtil(arr, 0, n - 1, n); 
} 

// Driver Code 
int main() 
{ 
	int arr[] = { 10,9,8,7,11,6,5,9,5N }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Index of a peak point is "
		<< findPeak(arr, n); 
	return 0; 
} 

// This code is contributed by rathbhupendra */

