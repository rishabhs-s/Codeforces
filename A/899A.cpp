#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans;
	vector<int>a(n);
	int one=0,two=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1){
			one++;
		}
		else{
			two++;
		}
	}
	if(one>two){
	ans=two+(one-two)/3;
	cout<<ans;
	}
	else{
		cout<<one;
	}
}
