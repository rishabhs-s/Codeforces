#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int one=0;
	int zero=0;
	for(int i=0;i<n;i++){
		if(s[i]=='n'){
			one++;
		}
		else if(s[i]=='z'){
			zero++;
		}
	}
	while(one--){
		cout<<"1"<<" ";
	}
	while(zero--){
		cout<<"0"<<" ";
	}
	
}
