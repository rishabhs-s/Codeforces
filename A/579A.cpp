#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int c=0;
	while(n/2!=0){
		if(n%2==1)
			c++;
		n=n/2;
	}
	cout<<c+1;
}
