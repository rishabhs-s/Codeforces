#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	bool f=false;
	for(int i=0;i<n;i++){
		if(s[i]=='4'||s[i]=='7'){
			f=true;
		}
		else{
			f=false;
		}
	}
	if(f){
		if(stoi(s)%2==0){
			cout<<"YES";
		}
		else{
		cout<<"NO";
	}
	}
	else{
		cout<<"NO";
	}
	
}
