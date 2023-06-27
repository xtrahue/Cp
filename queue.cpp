#include<iostream>
#include<vector>

using namespace std ;

void enqueue(vector<int>& vec, int n){
    vec.push_back(n) ;
}

void dequeue(vector<int>& vec){
    if(vec.empty()){
        cout<<"No element is left in the Queue" ;
    }
    else{
        vec.pop_back() ;
    }    
}

void print(vector<int>& vec){
    for(auto it=vec.begin(); it!=vec.end() ; it++){
        cout<<*it<<" ";
    }
}

int main(){
    vector<int>vec ;
    bool exit = 1 ;

    while(exit){
        int choice,value ;
        cout<<"\n1 to Enqueue\n2 to Dequeue\n3 to Display\n0 to Exit\n " ;
        cin>>choice ;
        
        switch(choice){
            case 1:
                cout<<"Enter then Element: " ;
                cin>>value ;
                enqueue(vec,value) ;
                break ;
            
            case 2:
                dequeue(vec) ;
                break ;

            case 3:
                print(vec) ;
                break ;

            case 0:
                exit =0 ;
                break ;
        }
    }
}