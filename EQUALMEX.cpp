#include<iostream>
#include<algorithm>
using namespace std ;

bool fun(int a[],int n){
    int i=0,j =0,flag=0 ;

    for(i=0;i<2*n;i++){
        for(j=i;j<2*n;j++){
            if(a[i]==a[j]){
                flag++ ;
            }
        }
        if(flag<=1){
            return 0;
        }
        else{
            i=j ;
        }
    }
    return 1;
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        int a[2*n] ;
        for(int i=0;i<2*n;i++){
            cin>>a[i] ;
        }

        sort(a,a+n) ;

        int front=0 ;
        int move=0 ;
        int flag=0 ;

        /*while(front<2*n){
            while(a[move]==a[front]){
                move++ ;
                flag++ ;
            }
            if(a[front]!=a[move] && flag>=2){
                front=move ;
            }
            else{
                break ;
            }
        }*/
        bool f= fun(a,n) ;

        if(f==0){
            cout<<"NO"<<endl ;
        }
        else{
            cout<<"YES"<<endl ;
        }
    }

    return 0;
}