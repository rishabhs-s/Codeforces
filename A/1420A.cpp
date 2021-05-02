#include<bits/stdc++.h>
using namespace std;

void fun(){

	int n;
	cin>>n;
	vector<int> a(n);
	int x=(((n*n)-n)/2)-1;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]<a[i-1]){
			continue;
		}
		else{
			cout<<"YES"<<endl;
		return;
		}
		
	}
	cout<<"NO"<<endl;
}

int main(){
	int t;
	cin>>t;
while(t--){
	fun();
}
return 0;
	
}
