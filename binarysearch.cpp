#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int target){
     int start=0;
     int end=n-1;
     int mid=start+(end-start)/2;
     while(start<=end){
          if(arr[mid]==target){
               return mid;

          }else if(target>arr[mid]){
               start=mid+1;
          }else{
               end=mid-1;
          }
          mid=start+(end-start)/2;
     }
     return -1;
}
int main(){
     int arr[5]={1,2,3,4,5};
     int target;
     cin>>target;
     cout<<binarysearch(arr,5,target);
return 0;
}