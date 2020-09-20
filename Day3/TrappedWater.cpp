//TRAPPING RAIN WATER.........
// min(left_max,right_max)-a[i]
#include<bits/stdc++.h>
using namespace std;
void trappedWater(int a[],int n,int l,int h){
	int mid = (l+h)/2;
	int i=0;
	int left_max=INT_MIN;
	int right_max =INT_MIN;
	int res=0;
	for(int i =0;i<mid;i++){
		if(a[i]>left_max){
			left_max = a[i];
		}
	}
	for(int i =mid;i<=n;i++){
		if(a[i]>right_max){
			right_max = a[i];
		}
	}
	int mini = 0;
    if(left_max>right_max) mini = right_max;
    else mini = left_max;
	for(int i = 0;i<n;i++){
	if(a[i]<mini)
	res +=mini-a[i];
	}
	cout<<res;
}
int main(){
	int arr[] = {6 ,9,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	trappedWater(arr,n,0,n);
	return 0;
}

