#include<iostream>
using namespace std;
void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b=temp;
}

int count102(int a[],int l,int h){
	int mid = 0;
	while(mid<=h){
		switch(a[mid]){
			case 0:
                swap(&a[l],&a[mid]);
				mid++;l++;
				break;
		    case 1:
		    	mid++;
		    	break;
		    case 2:
		    	swap(&a[mid],&a[h]);
		    	h--;
				break;
		}
	}
}
int main(){
	int arr[]={1,0,0,2,1,2};
	int n  = sizeof(arr)/sizeof(arr[0]);
	count102(arr,0,n-1);
	for(int i =0;i<n;i++)
	cout<<arr[i]<<"\t";
	return 0;
}
