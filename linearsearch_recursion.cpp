#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<<"size of array : "<<size<<endl;
    for(int i=0;i<size;i++ ){
        cout<<arr[i]<<" ";
       
    }
     cout<<endl;
}
bool linearSearch(int arr[],int size,int key){
    printarray(arr,size);
    //base case
    if(size==0){
     return false;
    }
    if(arr[0]==key){
        return true;
    }

    //recurrence relation
    int remainingpart=linearSearch(arr+1,size-1,key);
    return remainingpart;

}
int main(){
     int arr[5]={1,2,3,4,5};
     int size=5;
     int key=8;
    bool ans= linearSearch(arr,size,key);
    if(ans){
        cout<<"present"<<endl;
    }else{
        cout<<"Not Present"<<endl;
    }
return 0;
}