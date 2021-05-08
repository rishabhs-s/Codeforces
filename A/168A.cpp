#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	double p;
	cin>>x>>y>>p;
	double r=(p/100)*x;
	int re=ceil(r);

	if(re<=y){
		cout<<"0";
	}
	else{
			int ans=abs(re-y);
			cout<<ans;
	}

	
}
