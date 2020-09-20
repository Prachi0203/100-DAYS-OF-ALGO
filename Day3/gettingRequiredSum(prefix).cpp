//finding sum between indexes within o(n) time using prefix sum......
#include<bits/stdc++.h>
using namespace std;
int gettingsum(int a[],int n,int s,int e){
 int prefix_sum[n];
 prefix_sum[0]=a[0];
 for(int i =1;i<n;i++){
 	prefix_sum[i]= prefix_sum[i-1]+a[i];
 }
 for(int i =0;i<n;i++){
 	cout<<prefix_sum[i]<<"\t";
 }
  int sum_needed = 0;	
  sum_needed = prefix_sum[e]-prefix_sum[s-1];
  if(s==0){
  	sum_needed = prefix_sum[e];
  }
  return sum_needed;
}
int main(){
	int a[]={2,3,4,8,-9,20,6};
	int n=sizeof(a)/sizeof(a[0]);
	int start,end;cin>>start>>end;
	cout<<"required sum between: "<<start<<" and "<<end<<" is "<<gettingsum(a,n,start,end);
}
