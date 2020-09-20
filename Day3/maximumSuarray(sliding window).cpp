//sliding technique......
/*#include<bits/stdc++.h>
using namespace std;
int max_sum_k(int a[],int n,int k){
	int max_sum=0;int window_sum =0;
	if(k>n){
	cout<<"invalid"<<endl;
	return -1;}
	for(int i =0;i<k;i++){
	    max_sum+=a[i];	
	}
	window_sum = max_sum;
	for(int i=k;i<n;i++){      //removing first element and adding last element...........
		window_sum+= a[i]-a[i-k];
		max_sum = max(window_sum,max_sum);
	}
	return max_sum;
}
int main(){
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){	
	    cin>>a[i]; 
	}
	cout<<"max sum of suarray with k length is: "<<max_sum_k(a,n,k)<<"\t";
	return 0;
		
}*/
// O(n) solution for finding maximum sum of 
// a subarray of size k 
#include <iostream> 
using namespace std; 

// Returns maximum sum in a subarray of size k. 
int maxSum(int arr[], int n, int k) 
{ 
	// n must be greater 
	if (n < k) { 
		cout << "Invalid"; 
		return -1; 
	} 

	// Compute sum of first window of size k 
	int max_sum = 0; 
	for (int i = 0; i < k; i++) 
		max_sum += arr[i]; 

	// Compute sums of remaining windows by 
	// removing first element of previous 
	// window and adding last element of 
	// current window. 
	int window_sum = max_sum; 
	for (int i = k; i < n; i++) { 
		window_sum += arr[i] - arr[i - k]; 
		max_sum = max(max_sum, window_sum); 
	} 

	return max_sum; 
} 

// Driver code 
int main() 
{ 
	int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 }; 
	int k = 4; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << maxSum(arr, n, k); 
	return 0; 
} 

