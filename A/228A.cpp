#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int c=0;
	vector<int> a(4);
	for(int i=0;i<4;i++){
		cin>>a[i];
	}
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(a[i]==a[j]){
				c++;
			}
		}
		
}
cout<<c;
}
