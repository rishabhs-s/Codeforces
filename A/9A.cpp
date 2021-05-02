#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	int c=0;
	cin>>x>>y;
	int m=max(x,y);
	for(int i=m;i<=6;i++){
		c++;
	}
	string a[]={"0/1","1/6","1/3","1/2","2/3","5/6","1/1"};
	cout<<a[c];
}
