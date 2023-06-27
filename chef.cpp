#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// power --> in log complexity
// sieve --> isPrime
// cp --> cp template
// sub_bit --> subsets using bitmasking
// bs-->binary Search...upper and lower bound
// inv --> Modular Multiplicative inverse  -->(a/b)%mod = [(a%mod)*(inv(b)%mod)]%mod
// fact-->factorial till 10^6 
//order_of_key(ordered_st)--> returns total num of elements in the set which are smaller than the given element(logN)

int solveit(int n,int k){

}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin>>s ;

        int n=s.size() ;
        ll k;
        cin>>k ;
        
        vector<vector<int>>pos(10) ;

        for(int i=0;i<n;i++){
            pos[s[i]-'0'].push_back(i) ;
        }

        for(int i=1;i<=n-k;i++){
            for(int j=0;j<10;j++){
                for(int z=0;z<pos[j].size();z++){
                    if(pos[j][z]<)
                }
            }
        }
    }
}
