#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int x=a[n-1];
	int sum=0;
	for(int i=n-1;i>=0;i--){
		sum=sum+(x-a[i]);
	}
	
	cout<<sum;
	
}
