#include<iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include<cstring>
using namespace std;

int compare(string s,string s1){
	for(int i=0;i<s.length();i++){
	s[i]=tolower(s[i]);
	s1[i]=tolower(s1[i]);
	}
	if(s>s1){
		return 1;
	}
	else if(s<s1){
		return -1;
	}
	else
	return 0;
}

int main(){
	string s,s1;
	cin>>s;
	cin>>s1;
	cout<<compare(s,s1);
	
	
}
