#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int t;
		cin>>t;
		int k;
		while(t>0){
			int count=0;
			t=t-2020;
			count++;
			k=count;
		}
		if(t>=k){
			cout<<"yes";
		}
		else{
			cout<<"No";
		}
	}
}
