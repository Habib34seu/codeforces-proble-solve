#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n){
	
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1; j<n;j++){
			if(a[j]<a[min]){
				min =j;
			}
		}
		
		int temp =a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	
}

int main(){
	int n=4;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	selectionSort(a,n);
	int x = (a[1]+a[2])-a[3];
	int y = (a[0]+a[2])-a[3];
	int z = (a[0]+a[1])-a[3];
	cout<<x<<" "<<z<<" "<<y<<endl;
}
