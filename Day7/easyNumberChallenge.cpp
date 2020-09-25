#include<iostream>
using namespace std;
int main(){
	int m,n,o,sum=0,mul =0,temp;
	cout<<"m,n,o: ";
	cin>>m>>n>>o;int a[m][n][o];
for(int i =1;i<=m;i++){
	for(int j=1;j<=n;j++){
		for(int k=1;k<=o;k++){
			cout<<i<<"\t"<<j<<"\t"<<k<<endl;
            mul = k*j*i;
            temp = k;
		}
 			mul +=i*j*temp;
 			cout<<"mul "<<mul<<"\n";
	   }
   //sum+=mul;
   
   }
   cout<<"\nsum: "<<mul;
   
   return 0;	
}
