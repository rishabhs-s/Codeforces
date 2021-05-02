#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int i;
	int sum=0;
	int k=0;
	for(i=1;n>=sum;i++){
		k=k+i;
		sum=sum+k;
	}
	cout<<i-2;
}
