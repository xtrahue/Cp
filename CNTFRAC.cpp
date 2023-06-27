#include<iostream>
using namespace std ;

bool checkINT(float n){
    int res=n/1;
    if(n<=0 || n>=0 && res*1==n)
    {
    return 1;
    }
    return 0;
}



int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        int count=0 ;

        for(int w=1;w<=n;w++){
            for(int x=1;x<=n;x++){
                for(int y=1;y<=n;y++){
                    for(int z=1;z<=n;z++){
                        float j= ((float)w/(float)x) + ((float)y/(float)z) ;

                        if(checkINT(j)){
                            count++ ;
                        }
                    }
                }
            }
        }

        cout<<count<<endl ;
    }
}