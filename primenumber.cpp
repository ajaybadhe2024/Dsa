#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
   bool isprime=true;
   for(int i=2;i<n;i++){
        if(n%i==0){
           //not prime 
            isprime=false;
            break;
        }
     }
     if(isprime==false){
        cout<<"Not prime";
     }else{
        cout<<"prime number ";
     }
return 0;
}