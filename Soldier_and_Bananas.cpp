#include<bits/stdc++.h>
using namespace std;


int main(){
	int n, k, w, sum=0;
	cin>>n>>k>>w;
	
	for(int i=1;i<=w;i++){
		sum+=i;
	}
	int s = sum* n;
	int t = s-k;
	if(t<0){
		cout<<"0";
	}else{
		cout<<t;
	}
	
}
