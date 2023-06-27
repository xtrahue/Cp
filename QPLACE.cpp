#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==(n/2)+1 && (j>=2 && j<=n-1)){
                    cout<<"Q" ;
                }
                else{
                    cout<<"." ;
                }
            }
            cout<<endl ;
        }
    }

    return 0;
}