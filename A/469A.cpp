#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void game(vector<int>a,vector<int>b,int n){
	set<int>ans;
	for(int i=0;i<a.size();i++){
		ans.insert(a[i]);
	}
	for(int i=0;i<b.size();i++){
		ans.insert(b[i]);
	
}
	if(n==ans.size()){
		cout<<"I become the guy.";
	}
	else
	cout<<"Oh, my keyboard!";
}
int main(){
	int n;
	cin>>n;
	int p,q;
	cin>>p;
	vector<int> a(p);
	for(int i=0;i<p;i++){
		cin>>a[i];
	}
	cin>>q;
		vector<int> b(q);
		for(int i=0;i<q;i++){
		cin>>b[i];
	}
	game(a,b,n);
}
