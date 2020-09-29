#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char s[100];
		cin>>s;
		int len = strlen(s);
		if(len>10){
		cout<<s[0]<<to_string(len-2)<<s[len-1];
		cout<<endl;}
		else{
			cout<<s;
			cout<<endl;
		}
	}
	return 0;
}
