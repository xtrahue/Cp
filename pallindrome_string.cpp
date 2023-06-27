#include<iostream>
#include<string>
using namespace std ;

int main(){
	
	string s ;
	cin>>s ;
	int len = s.size() ;
	bool flag=0 ;
	
	for(int i=0;i<(len/2); i++){
		if(s[i] != s[len-i-1]){
			flag = 1;
			break ;
		}
	}

	if(flag){
		cout<<"NO"<<endl ;
	}
	else{
		cout<<"YES"<<endl ;
	}

	return 0;
}