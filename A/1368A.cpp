#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	
	cin>>t;
	while(t--){
		int a,b,n;
		int c=0;
		cin>>a>>b>>n;
		while(a+b<=n)
		if(a>b){
			b+=a;
		}
		else{
			a+=b;
			c++;
		}
		c++;
			cout<<c<<endl;	
	}

}
