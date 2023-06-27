#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        scanf("%d",&n) ;

        
        
        if(n==1){
            cout<<"3"<<endl ;
        }
        else{
            string q= "1" ;
           for(int i=1;i<n-1;i++){
               q.push_back('0') ;
           }

           string shuru = q+"2" ;

           cout<<(shuru)<<endl ;
        }
    }

    return 0;
}