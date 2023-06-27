#include<iostream>
using namespace std ;

int main(){
    int n;
    cin>>n ;

    while(n--){
        int p ;
        cin>>p ;

        if(p%2==0){
            for(int i=1;i<=p;i++){
                for(int j=1;j<=p;j++){
                    cout<<"-1"<<" " ;
                }
                cout<<endl ;
            }
        }
        else{
            for(int i=1;i<=p;i++){
                for(int j=1;j<=p;j++){
                    if(i==j){
                        cout<<"-1"<<" " ;
                    }
                    else{
                        cout<<"1"<<" " ;
                    }
                }
                cout<<endl ;
            }
        }
    }

    return 0;
}