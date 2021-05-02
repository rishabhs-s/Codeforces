#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		if(t<=3){
			ans=t-1;
		}
		else if(t%2==0){
			ans=2;
		}
		else{
			ans=3;
		}
			cout<<ans<<endl;
	}

}
