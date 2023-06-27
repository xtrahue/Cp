#include<iostream>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,q;
        scanf("%d %d",&n,&q);

        int c[2]{0} ;

        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x) ;

            c[__builtin_popcount(x)%2]++ ;
        }

        while(q--){
            int p;
            scanf("%d",&p) ;

            int count=__builtin_popcount(p) ;

            if(count&1){
                printf("%d %d\n",c[1],c[0]) ;
            }
            else{
                printf("%d %d\n",c[0],c[1]);
            }
        }
    }

    return 0;
}