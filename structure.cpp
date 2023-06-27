#include<iostream>
using namespace std ;

struct indra{

    int roll ;
    char sec ;
    long long int enrol_no ;
    void in(){
        cout<<"Enter Roll : " ;
        cin>>roll ;
        cout<<"Enter Sec : " ;
        cin>>sec ;
        cout<<"Enter  Enrolment No. : " ;
        cin>>enrol_no ;
    }
    void printDetails(){
        cout<<"Enrolment No = "<<enrol_no<<endl ;
        cout<<"Sec = "<<sec<<endl ;
        cout<<"Roll = "<<roll<<endl ;
    }
}p1,p2;

int main(){
    
    p1.in() ;

    p1.printDetails() ;  
}