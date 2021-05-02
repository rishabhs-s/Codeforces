#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;
	long long n;
	int k;
	cin>>q;
	while(q--){
		cin>>n;
		k=0;
		while(n>1){
			
		if(n%2==0){
			n=n/2;

		}
		else if(n%3==0){
			n=n/3;
			n=n*2;
			

		}
		else if(n%5==0){
			n=n/5;
			n=n*4;
		
		
		}
		else{
			k=-1;
			break;
		}
		k++;
	}
		cout<<k<<endl;
	}

}
