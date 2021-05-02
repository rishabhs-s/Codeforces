#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int b=0,c=0;
	int val;
	for(int i=0;i<n;i++){
		cin>>val;
		if(val>0){
			b=b+val;
		}
		else{
			c=c+val;
		}
	}
	cout<<b-c;
	
}
