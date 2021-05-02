#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	
	vector<int> a(n);
	while(t--){
		cin>>n;
		vector<int> a(n);
		long long sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum=sum+a[i];
			
		}
		if(sum%n==0){
			cout<<sum/n<<endl;
		}
		else{

			cout<<sum/n+1<<endl;
			
		}
	}
}
