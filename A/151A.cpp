#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int x,y;
	x=k*l/n;
	y=c*d;
	int z=p/np;
	
	int m=min(x,y);
	int f=min(m,z);
	cout<<f/n;
	
	
}
