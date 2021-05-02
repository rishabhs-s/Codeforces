#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int c=1;
	int ans=0;
	cin>>n;
	vector<int> a(n);

	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<n-1;i++){
		if(a[i]<a[i+1]){
			c++;
		}
		else{
			ans=max(ans,c);
			c=1;
		}
	}
	ans=max(ans,c);
	cout<<ans;
}
