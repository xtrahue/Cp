#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n;
    cin>>n ;

    while(n--){
        int t ;
        cin>>t ;

        int a[t];
        for(int i=0;i<t;i++){
            cin>>a[i] ;
        }

        int e[t],o[t],p=0,q=0,ce=0,co =0 ;

        for(int i=0;i<t;i++){
            if(a[i] & 1){
                o[p]=a[i] ;
                p++ ;
                co++ ;
            }
            else{
                e[q]=a[i] ;
                q++ ;
                ce++ ;
            }
        }
        sort(e, e + ce);
        sort(o, o + co);
        if(t & 1){
            if(co==(ce+1)){
                for(int i=0;i<co;i++){
                    if(i<ce){
                        cout<<o[i]<<" "<<e[i]<<" ";
                    }
                    else{
                        cout<<o[i]<<endl ;
                    }
                }
            }
            else{
                cout<<"-1"<<endl ;
            }
        }
        else{
            if(co==ce){
                for(int i=0;i<ce;i++){
                    cout<<o[i]<<" "<<e[i]<<" ";
                }
                cout<<endl ;
            }
            else{
                cout<<"-1"<<endl ;
            }
        }
    }
}