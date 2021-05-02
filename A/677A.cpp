#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h;
	cin>>n>>h;
	int count=0;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(v[i]<=h){
			count++;
		}
		else if(v[i]>h){
			count+=2;
			
		}
		
	}
	cout<<count;
}
