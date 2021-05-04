#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int l=0;
	int c=0;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	while(n--){
	for(int i=0;i<n;i++){
		if(v[i]==4||v[i]==7){
			l++;
		}
	}
	if(l<=k)
	{
		c=c+1;
	}
}
cout<<c;
}
