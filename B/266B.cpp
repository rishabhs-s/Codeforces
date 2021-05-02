#include<iostream>
#include<string>
using namespace std;
void queue(int n,int t,string s){
	while(t--){
	for(int i=0;i<n;++i){
			if(s[i]=='G' && s[i-1]=='B'){
				s[i]='B';
				s[i-1]='G';
				++i;
			}
		}
}
	cout<<s;
}


int main(){
	int n;
	int t;
	string s;
	cin>>n>>t;
	cin>>s;
	
	
	queue(n,t,s);
}


