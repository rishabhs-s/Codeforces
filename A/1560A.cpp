#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n;
	string s;
	int j=0;
	while(t--){
		cin>>n;
		cin>>s;
		int j;
		for(int i=0;i<n;i++){
			if(s[i]==s[i+1]){
				j++;
				i++;
			}
			else{
				cout<"D";
			}
			
		}
	}
	cout<<j;
}
