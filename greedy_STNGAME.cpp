#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        int n ;
        cin>>n ;

        int startA=0, endA=n-1,startB=0, endB=n-1, front=0,back=2*n-1 ;

        string s1 ;
        string s2 ;
        string s;

        getline(cin>>ws,s1) ;
        getline(cin>>ws,s2) ;

        sort(s1.begin(),s1.end()) ;
        
        sort(s2.begin(),s2.end()) ;
        reverse(s2.begin(),s2.end()) ;

        for(int i=0;i<2*n;i++){
            if(i&1){
                if((startB<=endB) && s2[startB]<s1[startA]){
                    s[back--] = s2[endB--] ;
                }
                else{
                    s[front++] = s2[startB++] ;
                }
            }
            else{
                if((startA<=endA) && s1[startA]<=s2[startB]){
                    s[front++] = s1[startA++] ;
                }
                else{
                    s[back--] = s1[endA--] ;
                }
            }
        }
        cout<<s<<endl ;

    }
}