#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int sum1=0,sum2=0;
	bool f=false;
	for(int i=0;i<n;i++){
		if(s[i]!='4'&&s[i]!='7'){
			cout<<"NO";
			return 0;
	}
	else{
		if(i<n/2)
            sum1+=s[i]-'0';
        else
            sum2+=s[i]-'0';
	}
}
	if(sum1==sum2){
		cout<<"YES";
	}
	else{
		cout<<"NO";

	}

}
