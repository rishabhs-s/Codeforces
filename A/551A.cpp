//wrong
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	vector<int>a1(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int c=1;
				c=c+1;
				a1.push_back(c);
			}
			else{
				j++;s
			}
		}
	}
	for(int i=0;i<n;i++){
	cout<<a1[i]<<" ";
	}
}
