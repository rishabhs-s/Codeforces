#include<bits/stdc++.h>
using namespace std;

bool panagram(string s){
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	bool b=true;
	int alphabets[26]={0};
	for(int i=0;i<s.size();i++){
		alphabets[s[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(alphabets[i]==0){
			b=false;
			break;
		}
//		else{
//			cout<<"NO";
//			break;
//		}
	}
	return b;
}

int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	auto x=panagram(s);
	if(x==true){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
}
