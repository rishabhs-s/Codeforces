#include<iostream>
#include<vector>
using namespace std;
int maxpeople(vector<int>a,vector<int>b){
	int max=0;
	int x=a[0]+b[0];
	for(int i=1;i<a.size();i++){
		x=x+b[i]-a[i];
	}

	cout<<x;
}
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	vector<int>b(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	maxpeople(a,b);
}
