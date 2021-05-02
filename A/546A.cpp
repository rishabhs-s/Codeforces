#include<iostream>
using namespace std;
int borrow(int c,int m ,int t){
	int tot=0;
	for(int i=1;i<=t;i++){
		tot=tot+i*c;
	}
	int x= tot-m;
	if(x>0){
		cout<<x;
	}
	else
	cout<<"0" ;
	
}
int main(){
	int c,m,t;
	cin>>c>>m>>t;
	borrow(c,m,t);
}
