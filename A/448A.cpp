#include<bits/stdc++.h>
using namespace std;
int main(){
	int a1,a2,a3;
	int b1,b2,b3;
	int n;
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	int cups=a1+a2+a3;
	int med=b1+b2+b3;
	cin>>n;
	if(n>1){
		if(cups<=5 && med<=10 ){
			cout<<"YES";
	}
		


	else{
		cout<<"NO";
	
	}
}
	else if(n>0 && cups==0 && med==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
