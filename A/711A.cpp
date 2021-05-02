#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
		string b[1002];
	string a;

	int ans=0;
	for(int i=0;i<t;i++){
		cin>>a;
		if(a[0]=='O'&& a[1]=='O'&& ans==0){
			a[0]='+';
			a[1]='+';
			ans=1;
		}
		else if(a[3]=='O'&&a[4]=='O'&&ans==0){
			a[3]='+';
			a[4]='+';
			ans=1;
			
		}
			b[i]= a;
}
		if(ans==1){
			cout<<"YES"<<endl;
		for(int i=0;i<t;i++){
			cout<<b[i]<<endl;
		}
	}
	else if(ans==0){
			cout<<"NO"<<endl;
	}
			
	}

