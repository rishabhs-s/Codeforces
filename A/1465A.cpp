#include<vector>
#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	
	while(t--){
		int n;
		cin>>n;
		int count=0;
		string s;
		cin>>s;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i] == ')'){
				count++;
			}
			else{
				break;
			}
			
		}
		if(count>(n-count)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		
	}

}
