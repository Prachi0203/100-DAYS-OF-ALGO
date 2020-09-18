//PRINTING MATRIX IN SPIRAL FORM.............
#include<bits/stdc++.h>
using namespace std;
void spiralform(int a[][4],int m,int n){
	int k=0,l=0;
	//k = starting row index, m = end of row index, l = starting of column index, n = end of coulmn index;
	while(k<m && l<n){
	for(int i=l;i<m;i++){
		cout<<a[k][i]<<"\t";     //first row printed remove it y inc. k
	}
	k++;
	for(int i=k;i<m;i++){
		cout<<a[i][n-1]<<"\t";   //last column print delete it y decreasing n.
	}
	n--;
	if(k<m){
		for(int i = n-1;i>=l;i--){
			cout<<a[m-1][i]<<"\t";    //printing last row from remaining rows
		}
		m--;
	}

	if(l<n){
		for(int i=m-1;i>=k;i--){
		cout<<a[i][l]<<"\t";           //printing first column from remaining columns.
		}
		l++;
	}
}
}   
int main(){
	int n=4,m;cin>>m;
	int a[m][4];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	spiralform(a,m,n);
}
