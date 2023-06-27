//didn't read the question correctly
#include<iostream>
#include<string>

using namespace std ;

int Permutation(int n, int k)
{
    int P = 1;
 
    for (int i = 0; i < k; i++)
        P *= (n-i) ;
 
    return P;
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,count0=0,count1=0;
        cin>>n ;

        string s;
        cin>>s ;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count0++ ;
            }
            else{
                count1++ ;
            }
        }

        int o = 2*(count0-2)*(count0-1) ;
        int l = 2*(count1-2)*(count1-1) ;
        cout<<o<<" "<<l<<endl  ;

        cout<<n+o+l<<endl ;
    }

    return 0;
}