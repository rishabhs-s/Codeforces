#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int x=b/2;
	int y=c/4;
	int z=min(a,min(x,y));
	int ans=z+(z*2)+(z*4);
	cout<<ans;
}
