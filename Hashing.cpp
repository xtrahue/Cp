#include<bits/stdc++.h>
#include<unordered_set>
using namespace std ;

int main(){
    unordered_set<int>s ;
    s.insert(5) ;
    s.insert(10) ;
    s.insert(7) ;

    if(s.find(5)==s.end()){
        cout<<"5 Not Found. " ;
    }
    else{
        cout<<"Found" ;
    }


    return 0;
}