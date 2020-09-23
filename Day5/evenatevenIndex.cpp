//putting even number at even places and odd numer at odd places........
#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b=temp;
}
void evenNoIndices(int a[],int n){
int evenInd = 0,oddInd = 1;         //checking on every even index at a time and every odd index positions if they are not 
                                   //we swap even start from 0 and odd start from 1........ 
while(true){
	while(evenInd<n&&a[evenInd]%2==0)
	evenInd+=2;
	while(oddInd<n&&a[oddInd]%2==1)
	oddInd+=2;
	if(evenInd<n && oddInd<n)
	swap(&a[evenInd],&a[oddInd]);
	else 
	break;
     }
}
int main(){
	int a[]={12,34,45,9,8,90,3};
	int n = sizeof(a)/sizeof(a[0]);
	evenNoIndices(a,n);
	cout<<"modified array even at even odd at odd indices: ";
	for(int i=0;i<n;i++){
	 cout<<a[i]<<"\t";
	}
	return 0;
}
