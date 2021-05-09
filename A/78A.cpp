#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c;
	int one=0;
	int two=0;
	int three=0;
	getline(cin,a);
		getline(cin,b);
			getline(cin,c);
	for(int i=0;i<a.size();i++){
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
			one++;
		}
	}
	for(int i=0;i<b.size();i++){
		if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'){
			two++;
		}
	}
	for(int i=0;i<c.size();i++){
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
				three++;
		}
	}

	if(one==5 && two==7 && three==5){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
