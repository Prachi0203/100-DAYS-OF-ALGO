#include<iostream>
using namespace std;
int localMinutil(int a[],int low,int high,int n){
	int mid;
	mid = low+(low+high)/2;
	if((mid==0||a[mid-1]>a[mid])&&(mid==n-1||a[mid+1]>a[mid])){
		return mid;
	}else if(mid>0||a[mid-1]<a[mid]){
		return localMinutil(a,0,mid-1,n);
	}else{
		return localMinutil(a,mid+1,high,n);
	}
}
int localMin(int a[],int n){
	//while(l>=0)
		localMinutil(a,0,n-1,n);
}
int main(){
	int n;
	int arr[]={1,2,3,4,5,6};
	n = sizeof(arr)/sizeof(arr[0]);
	for(int i =n;i>=0;i--){
	cout<<localMin(arr,i);
	}
}
