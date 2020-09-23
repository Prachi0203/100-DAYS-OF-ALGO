//count no. of 1's in a inary search using BS(BINARY SEARCH)
//First find leftmost index and rightmost index then sutract +1............(some prolem with the sol. fix it later)
#include<bits/stdc++.h>
using namespace std;
int noOf1s(int a[],int n,int l,int h,int x){
	int mid = (l+h)/2;int left=0,right=0;
	//left index.......................................................
	if((mid==0)||(a[mid]==x&&a[mid-1]<x)){                            //.
	 left =  mid;                                                    //.
	 return left;//cout<<"left: "<<left;}
	else if(a[mid]<x)                                                //.
	 return noOf1s(a,n,mid+1,n,x);                                   //.
	 else                                                            //.
	 return noOf1s(a,n,mid-1,n,x);                                    //.
	 //right index......................................................
	 if((mid==n-1)||(a[mid]==x&&a[mid+1]>x)){
	 right =  mid;
	 return right;//cout<<"right "<<right;}
	 else if(a[mid]<x)
	 return noOf1s(a,n,mid+1,n,x);
	 else
	 return noOf1s(a,n,mid-1,n,x);
     int result = right-left+1;
     return result;
}
int main(){
	 int a[]={0,0,0,1,1,1,1};
	 int n = sizeof(a)/sizeof(a[0]);
	 int x=1;
	 cout<<noOf1s(a,n,0,n,x);
}
