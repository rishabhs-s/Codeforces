#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<s.size();i++){
		for(int j=i+1;i<s.size();j++){
			for(int k=j+1;j<s.size();k++){
			if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q'){
				c++;
			}
		}
	}
}
	cout<<c;
}

//	if(s[i]=='Q'&&s[i+1]=='A'&&s[i+2]=='Q'){
//			c++;
//		}
//		else{
//			i++;
//		}
