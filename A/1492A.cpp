#include<bits/stdc++.h>
using namespace std;
int main(){
	int p,a,b,c;
	int x,y,z,t;
	cin>>t;
	while(t--){
		cin>>p>>a>>b>>c;
		if(p==a || p==b || p==c){
			cout<<"0"<<endl;
		}
		else{
			if(p>a){
				a=a+a;
			}
			if(p>b){
				b=b+b;
			}
			if(p>c){
				c=c+c;
			}
			
			}
			x=a-p;
			y=b-p;
			z=c-p;
			int m=min(x,y);
		int ans=min(m,ans);
		cout<<ans<<endl;
		}
		
		
	}
	
