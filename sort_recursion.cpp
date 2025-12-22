#include<iostream>
using namespace std;
bool issorted(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }

    //recurrence relation
    if(arr[0]>arr[1]){
        return false;
    }
    issorted(arr+1,size-1);
}
int main(){
     int arr[5]={2,3,4,5,6};
     int size=5;
     bool ans=issorted(arr,size);
     if(ans){
        cout<<"array is sorted"<<endl;
     }else{
        cout<<"Not Sorted"<<endl;
     }
return 0;
}