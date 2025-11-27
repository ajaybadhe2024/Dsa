#include<iostream>
using namespace std;
int getmin(int arr[],int n){
    int mini=INT8_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        // if(arr[i]<min){
        //     min=arr[i];
        // }
    }
    return mini;
}
int getmax(int arr[],int n){
    int max=INT8_MIN;
     for(int i=0;i<n;i++){
    //       maxi=max(maxi,arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
     int size;
     cin>>size;
     int arr[100];
     //taking input in array
     for(int i=0;i<size;i++){
        cin>>arr[i];
     }
     cout<<"maxiumum value "<<getmax(arr,size)<<endl;
       cout<<"minimum value "<<getmin(arr,size)<<endl;
return 0;
}