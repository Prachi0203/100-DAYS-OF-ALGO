#include<iostream>
#include<cstring>
using namespace std;
void lowercase(char s[],int n){
    for(int i =0;i<strlen(s);i++){
		if(s[i]>=65&&s[i]<=90){
			s[i] = s[i]+32;
		}
	}
//return *s;
}
void deletevowel(char a[],int n){
	int index=0;
for(int i=0;i<=n;i++){
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'
		||a[i]=='y'||a[i]=='Y')
		continue;
	else
	 a[index++]=a[i];
}	
}
void dotConsonants(char a[],int n){
	char result[2*n-1];
for(int i=0;i<n;i++){
	cout<<'.'<<a[i];
}
}
int main(){
	char s[100];
	cin>>s;
    int length = strlen(s);
    lowercase(s,length);
	//cout<<"\nlowercase: "<<s;
	deletevowel(s,length);
	//cout<<"\nwithoutvowels: "<<s<<endl;
	int len = strlen(s);
	//cout<<"after removing lenght: "<<len<<endl;
	dotConsonants(s,len);
//	cout<<"final output: "<<s<<endl;
}
