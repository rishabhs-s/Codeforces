#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>a(4);
	int sum=0;
	cin>>a[0]>>a[1]>>a[2]>>a[3];
	string s;
	cin>>s;
	for (int i = 0; i < s.size(); i++) {
       sum=sum+a[s[i] - 49];
       
}
cout<<sum;
}
