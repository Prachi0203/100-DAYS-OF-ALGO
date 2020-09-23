//segregate even and odd numbers first..............learnt form gfg something new 
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b=temp;
}
int segregateEvenOdd(int a[],int n){
int left =0,right = n-1;
//left = increment if found any odd index.......
//right = decrement if found any even index.....
while(left<right){
	while(a[left]%2==0 &&left<right)
	left++;
	while(a[right]%2==1 &&left<right){
		right--;
	}
	if(left<right){
	swap(&a[left],&a[right]);
	left++;
	right--;
	}
  }
}

int main(){
	int a[]={12,34,45,9,8,90,3};
	int n = sizeof(a)/sizeof(a[0]);
	segregateEvenOdd(a,n);
	for(int i =0;i<n;i++)
	cout<<a[i]<<"\t";
	return 0;
}
