//approach-1

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int a=0;
	cin>>n>>m;
	while(m!=0){
		if(m>=n){
		m=m-n;
		a++;
	}
	else{
		n--;
	}
	}

	cout<<a;
}



//approach-2


#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,m;
	cin>>n>>m;
	
	cout<<setprecision(0)<<ceil(m/n);
}
