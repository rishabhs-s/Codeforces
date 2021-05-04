#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int min=v[n-1]-v[0];
	int m;
	min=abs(min);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			m=v[i]-v[j];
			m=abs(m);
		}
	}
}
