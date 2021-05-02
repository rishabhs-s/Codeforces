#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	string st;
	for(int i=0;i<s.size();i++){
		if(s[i]=='.') {
			st+="0";
		}
		if(s[i]=='-' && s[i+1]=='.'){
			st+="1";
		++i;
		}
		if(s[i]=='-' && s[i+1]=='-'){
			st+="2";
			++i;
		}
	}
	cout<<st;
}
