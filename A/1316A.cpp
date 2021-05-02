#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k;
	cin>>t;

	while(t--){
		cin>>n>>k;
			int a[n];
		int s=0;	
		for(int i=0;i<n;i++){
			cin>>a[i];
			s=s+a[i];
		}
		if(s<=k){
			cout<<s<<endl;
		}
		else{
			cout<<k<<endl;
		}
	}
}
