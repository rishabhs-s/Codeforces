#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a,b=1,k;
	for(int i=0;i<t;i++){
			int sum=0;
		for(int j=0;j<4;j++){
	
		cin>>a;
		sum=sum+a;
		if(i==0){
			k=sum;
		}
		if(k<sum){
			b++;
		}
	}
}		
	cout<<b;
}
