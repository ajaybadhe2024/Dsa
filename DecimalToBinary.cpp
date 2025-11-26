#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     float ans=0;
      int i=0;
       while(n!=0){
        int bit=n&1; 
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
     }
     cout<<"Answer is : "<<ans<<endl;

}



// IN Term of string 



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string ans="";
//     while(n!=0){
//       int bit=n&1;
//       ans.push_back(bit+'0');
//       n=n>>1;

//     }
//     reverse(ans.begin(),ans.end());
//     cout<<ans;
// return 0;
// }