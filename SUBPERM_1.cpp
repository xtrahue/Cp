#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,k ;
        cin>>n>>k ;

        if(n>1 && k<2){
            cout<<"-1"<<endl ;
        }
        else if(k==2){
            cout<<"1"<<" " ;
            for(int i=n;i>=2;i--){
                cout<<i<<" ";
            }
            cout<<endl ;
        }
        else{
            if(n==k){
                for(int i=1;i<=n;i++){
                    cout<<i<<" " ;
                }
                cout<<endl ;
            }
            else{
                for(int i=1;i<k-1;i++){
                    cout<<i<<" " ;
                }
                for(int i=n-1;i>=(k-1);i--){
                    cout<<i<<" " ;
                }
                cout<<n<<endl ;
            }
            
        }    
    }
    return 0;
}