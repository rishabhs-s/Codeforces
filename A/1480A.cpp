#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		int c=1;
		for(int i=0;i<s.length();i++){
			if(c==1){
				if(s[i]=='a'){
					s[i]='b';
				}
				else if(s[i]!='a'){
					s[i]='a';
				}
					c=2;
				}	
			else if(c==2){
				
				if(s[i]=='z'){
					s[i]='y';
				}
				else{
					s[i]='z';
				}
				c=1;
				
			}	
		}
		cout<<s<<endl;
	}
}
