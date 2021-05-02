#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n;
	int count=0;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(a[0]<0){
		for(int i=0;i<n;i++)
		while(a[i]<0){
			count++;
		}
		cout<<count;
	}
	
}
