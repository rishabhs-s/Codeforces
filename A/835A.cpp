#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	int x=0;
	int y=0;
	for(int i=0;i<s;i++){
		x=x+v1;
		y=y+v2;

	}
		x=x+2*t1;
		y=y+2*t2;
		if(x>y){
			cout<<"Second";
		}
		else if(y>x){
			cout<<"First";
		}
		else if(x=y){
			cout<<"Friendship";
		}
}
