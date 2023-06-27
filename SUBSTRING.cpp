#include<iostream>
#include<string>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s ;

        int n = s.length() ;

        int count = 0,ans = 0 ;

        for(int i=1;i<n-1;i++){
            if(s[i]==s[0] || s[i]==s[n-1]){  
                count=0 ;
            }
            else{
                count++ ;
                ans = max(ans,count) ;
            }
        }

        if(ans==0){
            cout<<"-1"<<endl ;
        }
        else{
            cout<<ans<<endl ;
        }
        
    }
    return 0;
}