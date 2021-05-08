#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a,b;
	int c;
	while(t--){
		cin>>a>>b;
		if(a<b){
			swap(a,b);
		}
		int diff=a-b;
		int ans=diff/5;
		c=diff%5;
		if(c==1||c==2){
			ans++;
		}
		else if(c==3||c==4){
			ans+=2;
		}
		cout<<ans<<endl;
	}
}

