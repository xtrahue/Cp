#include<bits/stdc++.h>
using namespace std ;

int count_zero(string s,int n, int x){
    int count = 0 ;
    for(int i=0;i<n;i++){
        for(int j=i; j<(i+x);j++){
            if(s[i]!='0'){
                break ;
            }
            else{
                continue ;
            }
        }
        count++ ;
    }
    return count ;
}

int greatest(vector<int>vec){
    int max = vec.at(0) ;
    for(int i=0;i<vec.size();i++){
        if(vec.at(i)>max){
            max = vec.at(i) ;
        }
    }

    return max ;
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n,x;
        cin>>n>>x ;

        string s ;
        getline(cin >> ws, s);
        vector<int>vec ;

        for(int i=0;i<n;i++){
            string p = s ;
            if(s[i]=='1'){
                if(s[i-1]=='0'||s[i+1]=='0')
                       p[i] = '0' ;
            }
            int xz = count_zero(p,n,x) ;
            vec.emplace_back(xz) ;
        }
        int gh = greatest(vec) ;
        cout<<gh<<endl;
    }
}