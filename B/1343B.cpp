#include<iostream>
#include<vector>
using namespace std;


int main(){
	int t;
	long long n,s1,s2;
	cin>>t;
	while(t--){
		s1=s2=0;
		cin>>n;
		if(n%4!=0){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
			for(int i=2;i<=n;i=i+2){
				cout<<i<<" ";
			}
			for(int i=1;i<n-2;i=i+2){
				cout<<i<<" ";
			}
		}
		
	}

	
}
