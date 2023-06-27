#include<iostream>
using namespace std ;

int main(){
    int t,s=0;
    cin>>t ;

    if(s>2000000 && t>100000){
        cout<<"-1"<<endl ;
    }
    
    while(t-- && s<=2000000 && t<=100000){
        int n,k ;
        cin>>n>>k ;
        s+=n ;
        
        if((n-k <= 1 && n!=k) || n>100000 || n<1 || k<0 || k>n){
            cout<<"-1"<<endl ;
        }

        else if(k==0){
            for(int i=n;i>=1;i--){
                cout<<i<<" ";
            }
            cout<<endl ;
        }
        else{
            for(int i=1;i<=k;i++){
                cout<<i<<" ";
            }
            for(int i=n ;i>k;i--){
                if((n-k)& 1){
                    if(i==((n+k)/2)+1){
                        cout<<((n+k)/2)<<" ";
                    }
                    if(i==((n+k)/2)){
                        cout<<((n+k)/2)+1<<" ";
                    }
                    else{
                        cout<<i<<" ";
                    }
                }
                else{
                    cout<<i<<" ";
                }
            }
            cout<<endl ;
        }
    }

    return 0;
}