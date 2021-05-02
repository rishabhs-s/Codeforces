#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int drink(vector<double> v){
	float sum=0.00000;
	float p=0.000000;
	for(int i=0;i<v.size();i++){
		v[i]=v[i]/100;
		sum=sum+v[i];	
	}
	p=(sum/v.size())*100;
	cout<<setprecision(7)<<p;
}
int main(){
	int n;
	cin>>n;
	vector<double> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	drink(v);
}
