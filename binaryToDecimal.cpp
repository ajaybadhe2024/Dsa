
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int ans=0;
    int i=0;
     while(n!=0){
    int digit=n%10;
    if(digit==1){
        ans=ans+(pow(2,i));
    }
    n/=10;
    i++;
     }
     cout<<ans;
return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int n;
//      cin>>n;
//      int ans=0;
//      int i=0;
//      while(n!=0){
//         int digit=n%10;
//         ans+=pow(2,i)*digit;
//         i++;
//         n/=10;
//      }
//      cout<<ans;
// return 0;
// }