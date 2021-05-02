#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x=0;
		int y=0;
			int z=0;
	vector<int> a(n);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i+=3){
		x=x+a[i];
	}
		for(int i=2;i<=n;i+=3){
		y=y+a[i];
	}
		for(int i=3;i<=n;i+=3){
		z=z+a[i];
	}
	if(x>y && x>z){
		cout<<"chest";
	}
	else if(y>x && y>z ){
		cout<<"biceps";
	}
	else{
		cout<<"back";
	}
}
