#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum,count=0;
	while(sum<=n)
	for(int i=2;i<n;i++){
		if(n%i==0){
			
		}
		else{
			count++;
			sum=sum+i;
			cout<<count<<endl;
			cout<<i<<" ";
		}
		
	}
}
