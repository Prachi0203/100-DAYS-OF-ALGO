#include<bits/stdc++.h>
using namespace std;
/*void BoyOrGirl(string ch){
	//if((strlen(ch)-1)%2==0)
	cout<<"CHAT WITH HER!"<<endl;
	cout<<"IGNORE HIM!"<<endl;
}*/
int main(){
	char ch[100];
	gets(ch);
	if((strlen(ch)-1)%2==0)
	cout<<"CHAT WITH HER!";
	else
	cout<<"IGNORE HIM!";
	//puts(ch);
	//BoyOrGirl(ch);
	return 0;
}
