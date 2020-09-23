//finding  longest alternating even and odd suarray...........
#include<bits/stdc++.h>
using namespace std;
int longestOddEven(int a[],int n){
	int count = 1;int flag=1;
	for(int i = 0;i<n-1;i++){
		if((a[i]+a[i+1])%2==1){
            count++;
	//		cout<<a[i]<<"\t";		
		        }else{
		        	flag = max(count,flag);
		        	count = 1;
				}
	}
	if(flag==1){
		return 0;
	}else
	return count;
}
int main(){
	int a[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<longestOddEven(a,n); 
	return 0;
}
