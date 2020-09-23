//finding triplets of given sum.............
#include<bits/stdc++.h>
using namespace std;
bool isPair(int a[],int n,int x){
	//IST APPROACH theta(N^3) sol.
/*	for(int i=0;i<n;i++){
	   for(int j=i+1;j<n;j++){
	   	for(int k=j+1;j<n;j++){
	   		if(a[i]+a[j]+a[k]==x){
	   			cout<<"triplet: "<<a[i]<<", "<<a[j]<<", "<<a[k]<<", "<<endl;			   }
		   }
	   }
	}
	return false;
	   
}*/
int l,r;
for(int i=0;i<n-2;i++){
	l = i+1;r = n-1;
	while(l<r){
		if(a[i]+a[l]+a[r]==x){
		 	cout<<"triplet: "<<a[i]<<", "<<a[l]<<", "<<a[r]<<", "<<endl;
		 	break;
	}else if(a[i]+a[l]+a[r]>x)
          r--;
    else 
    l++;
}
}
return false;
}
int main(){
	int a[] ={2,3,4,8,9,20,40};
	int n = sizeof(a)/sizeof(a[0]);
	int x=32;
	cout<<isPair(a,n,x);
}
