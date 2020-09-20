//stock and sell maximum profit...........using local minmima ad local maxima.......
#include<iostream>
using namespace std;
void maxprofit(int a[],int n){
	int i = 0;
	if(n==1){
		return;
	}
	while(i<n-1){
		while((i<n-1)&&(a[i+1]<=a[i])){
			i++;
		}
		if(i==n-1)
		break;
	int	buy = i++;
		while(i<n&&(a[i]>=a[i-1])){
		  i++;
		}
	int	sell = i-1;
			//for(int i=0;i<count;i++){
		cout<<"stock buy on day: "<<buy<<" stock sell on day: "<<sell<<"\t";
	}

}
int main(){
	int a[]={100,180,260,310,40,535,695};
	int n = sizeof(a)/sizeof(a[0]);
    maxprofit(a,n);
}
