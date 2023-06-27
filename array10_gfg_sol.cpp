#include <bits/stdc++.h>
using namespace std;
 
/* Function prints union of arr1[] and arr2[]
   m is the number of elements in arr1[]
   n is the number of elements in arr2[] */
void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
 
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
 
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
 
    /* Print remaining elements of the larger array */
    while (i < m)
        cout << arr1[i++] << " ";
 
    while (j < n)
        cout << arr2[j++] << " ";
}
 
/* Driver program to test above function */
int main(){
    cout<<"Put the size of both the arrays: " ;
    int n,m;
    cin>>n>>m ;

    cout<<"Put the elements of the first array: " ;
    int arr1[n] ;
    for(int i=0; i<n; i++){
        cin>>arr1[i] ;
    }

    cout<<"Put the elements of the second array: " ;
    int arr2[m] ;
    for(int i=0; i<m ;i++){
        cin>>arr2[i] ;
    }

    printUnion(arr1,arr2,n,m) ;

    return 0;
}