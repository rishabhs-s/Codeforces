#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
	int a,b,c;
	vector<int> v(3);
	for(int i=0;i<3;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int sum=0;
	int x=v[2]-v[1];
	int y=v[1]-v[0];
	cout<<abs(x+y);
		
}
