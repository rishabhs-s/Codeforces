#include<iostream>
#include<set>
using namespace std;

int main(){
	string s;
	cin>>s;
	int count=0;
	int n=s.length();
	set<char> se;
	for(int i=0;i<n;i++){
		se.insert(s[i]);
	}
	if(se.size()%2==0){
		cout<<"CHAT WITH HER!";
	}
	else
	cout<<"IGNORE HIM!";
}
