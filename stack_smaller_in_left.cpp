#include<iostream>
#include<stack>

using namespace std ;

void smallerLeft(int a[],int n){
    stack<int>s ;

    for(int i=0;i<n;i++){
        while(!s.empty() && s.top()>=a[i]){
            s.pop() ;
        }
        if(s.empty()){
            cout<< "-1 " ;
            s.push(a[i]) ;
        }
        else if(a[i]>s.top()){
            cout<< s.top()<<" " ;
            s.push(a[i]) ;
        }
        
    }
}

int main(){
    int n;
    cin>>n ;

    int a[n] ;
    for(int i=0;i<n;i++){
        cin>>a[i] ;
    }

    smallerLeft(a,n);

}