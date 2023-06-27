#include<iostream>
using namespace std;
int main()
{
  int savings;
   cin>>savings;

   if (savings>5000){
       if(savings>10000){
           cout<<"Dinner"<<endl;
       }
       else{
           if (savings>7000){
               cout<<"jhalmuri"<<endl;
           }
           else{
               cout<<"Only Chop"<<endl;
           }
        
       }
      
   }
   else{
       cout<<"Shukiye thako"<<endl;
   }

    return 0;
}