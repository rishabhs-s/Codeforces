#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int c=0;
	int size=s.length();
	for(int i=0;i<size;i++){
		if(s[i]=='a'){
			c++;
		}
	}
	if(c<=size/2){
		while(c<=size/2){
			size--;
		}
	}
	cout<<size;
}
