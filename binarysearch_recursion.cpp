#include<iostream>
using namespace std;
void printarray(int arr[],int s,int e){
   for(int i=s;i<=e;i++){
    cout<<arr[i]<<" ";

   }
   cout<<endl;
}

 bool binarySearch(int arr[],int s,int e,int key ){
    printarray(arr,s,e);
    //base case
    int mid =s+(e-s)/2;
    cout<<"mid value is : "<<arr[mid]<<endl;
    if(s>e){
        return false;
    }
    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }else{
        return binarySearch(arr,s,mid-1,key);
    }
 }
int main(){
     int arr[6]={1,2,3,4,5,6};
     int size=6;
     int key=12;
     cout<<"Present Or Not : "<<binarySearch(arr,0,size-1,key);
    
return 0;
}