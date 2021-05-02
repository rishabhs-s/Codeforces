#include<iostream>

using namespace std;
int cnt(string s,int n){
	int count=0;
		for(int i=0; i<n-1;i++){
				if(s[i]==s[i+1]){
					count=count+1;
			}
		}
		return count;
	}
	
int main(){
	int n;
	cin>>n;
	
	string s;
	cin>>s;
	cout<<cnt(s,n);

}
