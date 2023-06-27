#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l, int mid, int h){
    int i=l;
    int j= mid+1;
    int k =l;
    int b[h-l+1] ;

    while(i<=mid && j<=h){
        
        if(arr[i]>arr[j]){
          b[k] = arr[j];  //be careful...can't write the opposite{arr[j] = b[k]}
          k++;
          j++ ;
       }
       
       else{
         b[k] = arr[i];//be careful...can't write the opposite{arr[i] = b[k]}
         k++;
         i++ ;
       }

    }
    // Insert all the remaining values from i to mid into temp[]
    while (i <= mid)
	{
		b[k] = arr[i];
		k++;
		i++;
	}
 
	// Insert all the remaining values from j to high into temp[].
	while (j <= h)
	{
		b[k] = arr[j];
		k++;
		j++;
	}
    
    for(int i=l;i<=h;i++){
        arr[i] = b[i-l];
    }
}

void mergeSort(int arr[],int l,int h){
    
    if(l<h){
         int mid = (l+h)/2 ; //h+1....as h is n-1 ;
    
         mergeSort(arr,l,mid);
         mergeSort(arr,mid+1,h) ;

         merge(arr,l,mid,h) ;
    }   
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    }
    
    mergeSort(arr,0,n-1) ;
    printArray(arr,n) ;

    return 0;
}