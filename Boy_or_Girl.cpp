#include<bits/stdc++.h>
using namespace std;

int main(){
	string s, result ="";
	cin>>s;
	int l = s.length();
	int has[123]={0};
	for(int i=0;i<l;i++){
		if(has[s[i]]==0){
			has[s[i]]=1;
			result+=s[i];
		}
	}
	string r = result;
	int l1 = r.length(), count =0;
	
	for(int i=0;i<l1;i++){
		if(r[i] !=r[i+1]){
			count++;
		}
	}
	
	if(count%2 ==0){
		cout<<"CHAT WITH HER!"<<endl;
	}else{
	  cout<<"IGNORE HIM!"<<endl;	
	}
	return 0;
}
