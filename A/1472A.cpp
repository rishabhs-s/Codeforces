#include<iostream>
using namespace std;
 int main(){
	int t;
	int sheets=1;
	cin>>t;
	for(int i=0;i<t;i++){
		int w,h,n;
		cin>>w>>h>>n;
		if(w%2==0 || h%2==0){
		
		while (w % 2 == 0) {
                w = w / 2;
                sheets = sheets * 2;
            }
            while (h % 2 == 0) {
                h = h/2;
                sheets = sheets*2;
            }
            if(sheets>=n){
               cout<<"YES"<<endl;
            }else{
			 cout<<"NO"<<endl;
            }
	}
	else{
		cout<<"NO"<<endl;
	}
	}

 }
