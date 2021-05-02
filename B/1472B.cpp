#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;i++){
			
			cin>>a[i];
		}
		int one=0;
		int two=0;
		for(int i=0;i<n;i++){
			if(a[i]==1){
				one++;
			}
			else{
				two++;
			}
		}
//		if(n%2==0 && (one==n || two==n)){
//			cout<<"YES"<<endl;
//		}
	 if(one==two){
			cout<<"YES"<<endl;
			
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
}
