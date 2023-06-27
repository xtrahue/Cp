#include<iostream>

using namespace std ;

unsigned int countSetBits(int n)
{
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main(){
    int t;
    cin>>t ;

    int arr[1000] ;
    int i=0 ;
    
        for(int p=1;i<1000;p++){

        int q =countSetBits(p) ;
        if(countSetBits(p)&1){
            continue ;
        }
        else{
            arr[i] = p ;
            i++ ;
        }
    }

    while(t--){
        int n;
        cin>>n ;

        for(int z=0;z<n;z++){
            cout<<arr[z]<<" ";
        }
        cout<<endl ;   
    }
}