#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int x,y,z;
	vector <int> a(4);
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	sort(a.begin(),a.end(),greater<int>());
	x=a[0]-a[1];
	y=a[0]-a[2];
	z=a[0]-a[3];
	cout<<x<<" "<<y<<" "<<z;
}
