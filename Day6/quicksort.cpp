#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b=temp;
}
//first partioning then calling quicksort on half part of it and second half of it...........
int partition(int a[],int l,int h){
	int i = l,j = h;int pivot = a[l];
	do{
		do{i++;
		}while(a[i]<=pivot);
		do{
			j++;
		}while(a[j]>pivot);
		if(i<j){
			swap(&a[i],&a[j]);
		}
	}while(i<j);
	swap(&a[l],&a[j]);
	return j;
}
void quicksort(int a[],int l,int h){
	int j;
	if(l<h){
	j = partition(a,l,h);
	quicksort(a,l,j);
	quicksort(a,j+1,h);}
}
int main(){
	int a[]={3,20,8,17,12,30,9};
	int n = sizeof(a)/sizeof(a[0]);
	quicksort(a,0,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
}
