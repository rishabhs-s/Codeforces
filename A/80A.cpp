#include<bits/stdc++.h>
using namespace std;

int func(int n){
	int c=0;
	for (int j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            c++;
        }
}
cout<<c<<"  ";
return c;
    
}

int main(){
	int a,b,c=0,f;
	cin>>a>>b;
	for(int i=a+1;i<=b;i++){
	f=func(i);
}
	if(f==1){
    	cout<<"YES";
    	
	}
	else{
		cout<<"NO";
	}

	
}
