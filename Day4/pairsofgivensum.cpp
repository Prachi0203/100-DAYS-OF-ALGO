#include<bits/stdc++.h>
using namespace std;
bool pairs(int a[],int n,int x){
	int left = 0;int right = n-1;
	//for(int i = 0;i<n;i++){
	while(left!=right){
		if(a[left]+a[right]==x){
			return true;
		}else if(a[left]+a[right]>x){
			right--;
		}else{
			left++;
		}
	}
  return false;
} 
int main(){
	int x = 17;
	int a[]={3,5,9,2,8,10,11};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<pairs(a,n,x);
}
