#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a;
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>a;
		sum=sum+a;
	}
	sum=abs(sum);
	if(sum==0){
		cout<<"0";
	}
	else if(sum<=m){
		cout<<"1";
	}
	else{
		if(sum%m==0)
            cout<<sum/m;
        else
            cout<<(sum/m+1);
	}
}
