#include<iostream>
#include<string>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        int p  = n/26 ;
        int q= n%26 ;
        int count = 0;

        for(int i=1;i<=p;i++){
            for(char j='a';j<='z';j++){
                cout<<j ;
            }
        }
        for(char j='a';count<q;j++){
            cout<<j ;
            count++ ;
        }
        cout<<endl ;
    }

    return 0;
}