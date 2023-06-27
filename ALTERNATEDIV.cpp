#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        int odd =1 ;
        

        if(n<=2){
            for(int i=1;i<=n;i++){
                cout<<i<<" " ;
            }
            cout<<endl ;
        }
        else{
            cout<<"1 "<<2*n<<" " ;

            for(int i=3;i<=n;i++){
                if(i&1){
                    odd++ ;
                    cout<<odd<<" " ;
                    
                }
                else{
                    int p = 2*n%odd ;
                    if(p==0){
                        cout<<(2*n)-odd<<" " ;
                    }
                    else{
                        cout<<(2*n-odd)-p<<" " ;
                    }
                }
            }
            cout<<endl ;
        }
    }
    return 0;
}