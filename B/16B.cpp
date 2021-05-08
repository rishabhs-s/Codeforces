//wrong
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a,b;
	cin>>n>>m;
	int tot=0,count=0;
	while(m-- && count<=n){
		cin>>a>>b;
		count+=a;
		tot=tot+(a*b);
	}
	cout<<count<<" ";
	cout<<tot;
}
