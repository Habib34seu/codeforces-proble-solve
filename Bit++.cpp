#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, a=0, b=0;;
	cin>>n;
	string s;
	
	for(int i=0;i<n;i++){
		cin>>s;
		if(s[1]=='+'){
			a++;
		}if(s[1]=='-'){
			a--;
		}
	}
	
	cout <<a;
}
