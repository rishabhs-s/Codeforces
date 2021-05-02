#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum=sum+a[i];
	}
	int avg=(sum/n)*2;
	for(int i=1;i<=n;i++){
		if(a[i]!=0){
			for(int j=1;j<=n;j++){
				if(a[i]+a[j]==avg && i!=j){
					cout<<i<<" "<<j<<endl;
					a[i]=0;
					a[j]=0;
				}
			}
		}
	}
}
