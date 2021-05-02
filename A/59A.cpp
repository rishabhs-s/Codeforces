#include<iostream>
using namespace std;

void replace(string s){
	int count=0;
	for(int i=0;i<s.size();i++){
		if(s[i]>92){
			count++;
		}
	}
	int w=s.size()-count;
	if(w>count){
		for(int i=0;i<s.size();i++)
		s[i]=toupper(s[i]);
	}
	else
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
		cout<<s;
	}


int main(){
	string s;
	cin>>s;
	replace(s);
}
