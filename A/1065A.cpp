#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,s,a,b,c;
	cin>>t;
	while(t--){
	cin>>s>>a>>b>>c;
	long long  tot;
	tot=s/c;
	long long  pack=tot/a;
	long long  free=pack*b;
	long long  final=tot+free;
	cout<<final<<endl;
	}
}
