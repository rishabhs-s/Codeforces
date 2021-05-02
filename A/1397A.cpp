//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int n;
//	cin>>n;
//	int m;
//	cin>>m;
//	string s;
//	int alpha[26]={0};
//	while(n--){
//		for(int i=0;i<m;i++){
//			cin>>s;
//			for(int j=0;j<s.size();j++){
//				alpha[s[j]-'a']++;
//			}
//		}
//		
//		for(int i=0;i<26;i++){
//			if(alpha[i]%m!=0){
//				cout<<"NO";
//				break;
//			}
//		}
//		cout<<"YES";
//	
//	}
//}

#include<bits/stdc++.h>
using namespace std;

int fun (){
	int m;
	cin>>m;
	int alpha[26]={0};
	for(int i=0;i<m;i++){
		string s;
			cin>>s;
			for(int j=0;j<s.size();j++){
				alpha[s[j]-'a']++;
			}
		}
		
		for(int i=0;i<26;i++){
			if(alpha[i]%m!=0){
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
}
int main(){
	int n;
	cin>>n;

	
	
	while(n--){
		fun();
	
	}
}
