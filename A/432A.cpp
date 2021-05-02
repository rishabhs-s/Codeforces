#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	int c=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]+k<=5){
			c++;
		}
	}
int x=0;
x=c/3;
cout<<x;
}
