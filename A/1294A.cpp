#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n;
	vector<int>a(3);
	while(t--){
		for(int i=0;i<3;i++)
		cin>>a[i];
	cin>>n;
	sort(a.begin(),a.end());
	int q=a[2]-a[1];
	int w=a[2]-a[0];
	int diff=q+w;

	if(n>=diff){
	int k=n-diff;
	if(k%3==0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}
else {
	cout<<"NO"<<endl;
}
}
}
