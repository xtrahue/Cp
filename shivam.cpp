#include<iostream>
using namespace std;

int main()
{

int T,i;
cin>>T;
while(T--){
    int max_length=0,temp=0,j=1,sample=0;
    string input;
    cin>>input;
    int length=input.length();
    
    if(length<=2){
        cout<<"-1"<<endl;
    }

    else {
        for(i=1;i<length-1;i++){
        
            if( input[0]!=input[i] && input[length-1]!=input[i]){
                sample++;
                
                if(j==0){
                    max_length++;
                }
                    
                if(temp<max_length){
                    temp=max_length;
                }
                j=0;
            }

            else{
                j=1;
                max_length=0;
            }
        }
        
        if(sample==0){
            cout<<"-1"<<endl;
        }
  
        else{
            cout<<temp+1<<endl;
        }
    }
  

}
return 0;
}