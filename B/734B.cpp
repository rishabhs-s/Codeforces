#include<bits/stdc++.h>
using namespace std;
int main(){
	int k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	long long sum=0;
	while(k2>=1){
		if(k5>=1 && k6>=1){
		sum=sum+256;
		k2--;
		k5--;
		k6--;
		}
		else if(k3>=1&& k2>=1){
			sum=sum+32;
			k3--;
			k2--;
		}
		else{
			//sum;
			break;
		}
	}
cout<<sum;		
	
	
}
