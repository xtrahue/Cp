#include<iostream>

using namespace std ;

bool isVowel(char x){
    if (x == 'a' || x == 'e' || x == 'i' ||x == 'o' || x == 'u'){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int t;
    cin>>t ;
   

    while(t--){
        int n;
        cin>>n;

        string s,p ;
        cin>>s>>p ;

        int count=1e9 ;

        for(char c = 'a' ; c<='z' ; c++){

            int count_2 = 0;

            for(int i=0;i<n;i++){
                char si,pi ;
                si=(s[i]=='?')?c:s[i] ;
                pi=(p[i]=='?')?c:p[i] ;
                
                if(si==pi){
                    continue ;
                }
                else{
                    bool p1=isVowel(si) , p2 = isVowel(pi) ;
                    count_2+=((p1!= p2) ? 1 : 2) ;
                  
                }
            }
           
            count=min(count,count_2) ;
        }
        cout<<count<<endl ;
        
    }
}