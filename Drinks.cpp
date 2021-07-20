#include<bits/stdc++.h>
#include <iomanip> 
using namespace std;

int main(){
	int n,sum=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
    for(int i=0;i<n;i++){
		sum+=a[i];
	}
	
	double r = double(sum)/ double(n);
	cout<<fixed<<setprecision(12)<<r<<endl;
}
