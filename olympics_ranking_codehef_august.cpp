#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int flag ;

    int g1[n],s1[n],b1[n],g2[n],s2[n],b2[n] ;

    for(int i=0; i<n; i++){
        cin>>g1[i]>>s1[i]>>b1[i]>>g2[i]>>s2[i]>>b2[i] ;
    }
    

    for(int i=0; i<n; i++){

        if((g1[i]+s1[i]+b1[i])<(g2[i]+s2[i]+b2[i])){
            flag = 2;
        }
        else{
            flag = 1;
        }
        cout<<flag<<endl ;
    }

    return 0;
}