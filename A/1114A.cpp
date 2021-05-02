#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y,z;
	int a,b,c;
	int c1=0,c2=0,c3=0;
	cin>>x>>y>>z;
	cin>>a>>b>>c;
	if(a>=x){
		a=a-x;
		c1=1;
	}
	int p=a+b;
	if(p>=y){
		p=p-y;
		c2=1;
	}
	int all=p+c;
	if(all>=z){
		c3=1;
		
	}
	if(c1==1 && c2==1 && c3==1){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
}
