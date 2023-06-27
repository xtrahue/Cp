#include<iostream>
#include<math.h>
using namespace std;

int main(){
    //code isn't working

    int n;
    cin>>n;
    int sum=0;

    int originaln =n;

    while(n>0){

        int lastdigit= n%10 ;
        sum+= pow(lastdigit,3);
        n=n/10;
        
    }
    cout<<sum<<endl;
    
    if(sum==originaln){
        cout<<"This number is an Amstrong Number"<<endl;
    }
    else{
        cout<<"It's Not"<<endl;
    }



    return 0;
}