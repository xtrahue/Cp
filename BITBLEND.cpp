#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        int a[n],b[n],c[n] ;
        for(int i=0;i<n;i++){
            cin>>a[i] ;
            b[i] = a[i] ;
            c[i] = a[i] ;
        }

        int odd = 0 ;
        int even = 0;
        int soja =0, ulto =0 ;
        vector<int>permanent;
        vector<int> o_e ;
        vector<int>e_o ;

        for(int i=0;i<n;i++){
            if(a[i] & 1){
                odd++ ;
            }
            else{
                even++ ;
            }
        }

        if(odd==0){
            cout<<"-1"<<endl ;
        }
        else{
            for(int i=0;i<n-1;i++){
                if((b[i]%2==1) && (b[i+1]%2==1)){
                    soja++ ;
                    b[i+1]+=1 ; 
                }
                else if((b[i]%2==0) && (b[i+1]%2==0)){
                    soja++ ;
                    b[i+1]+=1 ;
                }               
            }
            for(int i=n-1;i>0;i--){
                if((c[i]%2==1) && (c[i-1]%2==1) ){
                    ulto++ ;
                    c[i-1]+=1 ; 
                }
                else if((c[i]%2==0) && (c[i-1]%2==0)){
                    ulto++ ;
                    c[i-1]+=1 ;
                }
            }
            if(soja<ulto){
                for(int i=0;i<n;i++){
                    if(a[i]%2==1){
                        if(b[i]%2==0){
                            o_e.push_back(i) ;
                        }
                        if(b[i]%2==1){
                            permanent.push_back(i) ;

                        }
                    }
                    else if(a[i]%2==0){
                        if(b[i]%2==1){
                            e_o.push_back(i) ;
                        }
                    }
                }
                cout<<soja<<endl ;

                int xo = permanent.size() ;

                for(int i=0;i<o_e.size();i++){
                    cout<<o_e[i]+1<<" "<<permanent[xo]+1<<endl ;
                }
                for(int i=0;i<e_o.size();i++){
                    cout<<e_o[i]+1<<" "<<permanent[xo]+1<<endl ;
                }
            }
            else{
                for(int i=0;i<n;i++){
                    if(a[i]%2==1){
                        if(c[i]%2==0){
                            o_e.push_back(i) ;
                        }
                        if(c[i]%2==1){
                            permanent.push_back(i) ;

                        }
                    }
                    else if(a[i]%2==0){
                        if(c[i]%2==1){
                            e_o.push_back(i) ;
                        }
                    }
                }
                cout<<ulto<<endl ;

                for(int i=0;i<o_e.size();i++){
                    cout<<o_e[i]+1<<" "<<permanent[0]+1<<endl ;
                }
                for(int i=0;i<e_o.size();i++){
                    cout<<e_o[i]+1<<" "<<permanent[0]+1<<endl ;
                }
            }

        }
    }

    return 0;
}