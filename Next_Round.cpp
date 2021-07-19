#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,p,count=0;
	cin>>n>>k;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		if(i==k){
			p=a[i];
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]>0){
			if(p<=a[i]){
				count++;	
			}
	  }
	}
	cout<<count<<endl;
	
}


