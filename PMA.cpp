#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n ;
        cin>>n ;

        int odd_p = 0 ;
        int even_p = 0 ;

        vector<int>odd ;
        vector<int>even ;

        for(int i=0;i<n;i++){
            int p;
            cin>>p ;

            int z= abs(p) ;

            if(i&1){
                even.push_back(z) ;
                even_p+=z ;
            }
            else{
                odd.push_back(z) ;
                odd_p+=z ;
            }
        }

        sort(even.begin(),even.end()) ;
        sort(odd.begin(),odd.end()) ;


        /*int odd_p = accumulate(odd.begin(), odd.end(), 0);
        int even_p = accumulate(even.begin(), even.end(), 0);*/

        int minus = odd[0] ;
        int plus = even[even.size()-1] ;

        cout<<max((odd_p)-(even_p)-2*(minus-plus),(odd_p-even_p))<<endl ;

        
    }

    return 0;
}