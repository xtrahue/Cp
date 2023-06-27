#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;

int remove(int arr[], int n, int b[])
{
    if (n==0 || n==1)
        return n;
 
    int j = 0,s=0;

    for (int i=0; i < n-1; i++)
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
        else{
            b[s++]=arr[i] ;
        }
    arr[j++] = arr[n-1];
 
    return j;
}

int main(){
    int t;
    cin>>t ;

    while(t--){
        int n;
        cin>>n ;

        int arr[n] ;
        for(int i=0;i<n;i++){
            cin>>arr[i] ;
        }

        sort(arr,arr+n) ;

        int count=0, Mcount=0;

        int b[n/2] ;

        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
                if(arr[i+1]==arr[i+2]){
                    count=count+2 ;
                }
                else{
                    count++ ;
                }
            }
            if(count>Mcount){
                Mcount=count ;
            }
            count=0;
        }
        if(Mcount==0){
            for(int i=n-1;i>=0;i--){
                cout<<arr[i]<<" " ;
            }
            cout<<endl ;
        }
        else if(Mcount==1){
            int p=remove(arr,n,b) ;

            for (int i=0;i<n-p; i++)
                cout <<b[i]<< " ";
            
            for(int i=p-1;i>=0;i--){
                cout<<arr[i]<<" " ;
            }
            cout<<endl ;
        }
        else{
            cout<<"-1"<<endl ;
        }
    }
}