#include <bits/stdc++.h>
using namespace std;

int main() {
	//code.........
	int T;
	cin>>T;
	while(T--){
	    int n;cin>>n;
	   /* vector<int> a(n);
	    vector<int>::iterator itr;
	    for(itr = a.begin();itr!=a.end();itr++){
	        cin>>*itr;
	    }*/int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int k;cin>>k;
	    cout<<a[k-1]<<"\n";
	}
	return 0;
}
