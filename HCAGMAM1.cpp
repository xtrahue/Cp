#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int x,y ;
        cin>>x>>y ;
        
        int count1 =0 , tmax=0, max=0 ;
        string s;
        cin>>s ;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count1++;
                tmax++;
            }
            if(s[i]=='0'|| i==(s.size()-1)){
                if(tmax>max){
                    max = tmax;
                }
                tmax=0 ;
            }
        }
        cout<<(count1*x + max*y)<<endl ;
    }
}