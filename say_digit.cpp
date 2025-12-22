#include<iostream>
using namespace std;
void saydigits(int n,string arr[]){
    //base case
    if(n==0){
        return ;
    }
    
    int digit=n%10;
    n/=10;

    //recurrence relation
    saydigits(n,arr);

    
    cout<<arr[digit]<<endl;

}
int main(){
     string arr[10]={"zero","one","two","three",
                     "four","five","six",
                     "seven","eight","nine"};
            int n;
            cin>>n;
            saydigits(n ,arr);         
return 0;
}