#include<iostream>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n,p,x,y ;
        cin>>n>>p>>x>>y ;

        int a[n] ;
        for(int i=0;i<n;i++){
            cin>>a[i] ;
        }

        int time =0;
        for(int i=0;i<p;i++){
            if(a[i]==0){
                time+=x ;
            }
            else{
                time+=y ;
            }
        }
        cout<<time<<endl ;
    }
}