#include<bits/stdc++.h>
using namespace std ;

bool findxinkwindowSize(int n,int arr[],int k, int x){

    int i;
    for(i=0;i<n;i=i+k){

        int j;
        for(j=0;j<k;j++){

            if(arr[i+j]==x){
                break ;
            }
        }
        if(j==k){
            return false ;
        }
    }
    if(i==n){
        return true ;
    }
}