#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[26]={0};
	string s;
	cin>>s;
	int ans=n;
	for (int i=0;i<n;i++){
		a[s[i]-'A']++;
	}
//	for (int i=0;i<k;i++){
//		cout<<a[i]<<" ";
//			cout<<endl;
//		}
	for (int i=0;i<k;i++){
			ans=min(ans,a[i]);	
	}
	cout<<ans*k;
}
