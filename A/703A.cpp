#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin>>n;
	int m=0;
	int c=0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>b){
			m++;
		}
		else if(b>a){
			c++;
		}
		
	}
	if(m>c){
		cout<<"Mishka";
	}
	else if(c>m){
		cout<<"Chris";
	}
	else if(c==m)
	cout<<"Friendship is magic!^^";
}
