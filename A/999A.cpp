#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,x;
	int c=0,c1=0;
	cin>>t>>x;
	vector<int> a(t);
		for(int i=0;i<t;i++){
			cin>>a[i];
		}
		int j;
		for(j=0;j<t;j++){
			if(a[j]<=x){
				c++;
				//cout<<c<<" ";
			}
			else{
				break;
			}
		}
		for(int k=t-1;k>=j+1;k--){
			if(a[k]<=x){
				c1++;
			}
			else
			break;
		}
		                                       
	cout<<c1+c;
}
