
#include<bits/stdc++.h>
using namespace std;


string divisor(vector<long long> a){
	for(int i=0;i<a.size();i++){
		for(int j=1;j<a[i];j=j+2){
			if(a[i]%j==0){
				cout<<a[i]<<" "<<j<<" ";
			return "Yes";
		}
			else{
				return "No";
				
			}
			
		
		}
	
		
	}
}

int main(){
	int t;
	cin>>t;
	vector<long long> a(t);
	for(int i=0;i<t;i++){
		cin>>a[i];
	}
	for(int i=0;i<a.size();i++){
			cout<<divisor(a)<<endl;
	}

}
