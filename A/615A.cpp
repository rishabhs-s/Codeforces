#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	bool flag=true;
	vector<int>v(101,0);
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	for(int i=0;i<x;i++){
		int y;
		cin>>y;
		v[y-1]++;
	}

}
		for(int i=0;i<m;i++){
		if(v[i]==0){
			flag =false;
		}
	}
	if(flag){
		cout<<"YES";
		
	}
	else{
		cout<<"NO";
	}
}
