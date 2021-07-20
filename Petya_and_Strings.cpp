#include<bits/stdc++.h>
using namespace std;

string  convert_string(string a){
	int i=0;
	int l= a.size();
	while(i<l){
		if(a[i]!='\0'){
			if(a[i]>='A' && a[i]<='Z'){
				a[i]=a[i];
			}
			else if(a[i]>='a' && a[i]<='z'){
			a[i]=a[i]-32;
		    }
		}
		
		i++;
	}
	return a;
}
int main(){
	int n=100;
	string s1, s2;
	cin>>s1>>s2;
	string a =convert_string(s1);
	string b =convert_string(s2);
	if(a==b){
		cout<<"0"<<endl;
	}else if(a>b){
		cout<<"1"<<endl;
	}else{
		cout<<"-1"<<endl;
	}
	
	
}
