#include<iostream>
using namespace std;
void printarray(int arr[],int n){
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
}
void sort(int arr[],int n){
     int i=0,j=n-1;
     while(i<j){
          while(arr[i]==0){
               i++;
          }
          while(arr[j]==1){
               j--;
          }
          //agar yaha tak pahuch gaya ho to matlab
          //arr[i]==1 && arr[j]==0
           if(i<j){
            swap(arr[i],arr[j]);
               i++;
               j--;
          }
               
          
     }
}
int main(){
      int arr[7]={1,0,1,0,1,1,1};
      sort(arr,7);
      printarray(arr,7);
return 0;
}