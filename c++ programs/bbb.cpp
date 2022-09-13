#include<iostream>
using namespace std;
void reversearray(int arr[],int n){
   int start = 0;
   int end  = 0;
   while(start<=end){
       swap(arr[start],arr[end]);
           start++;
           end--;
    }

}
   
 
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
}
  int main(){
      int arr[6] ={1,2,3,5,0,6};
      int brr[5] ={2,4,3,6,9};

      reversearray (arr ,6);
      reversearray (arr,5);

      printarray(arr,6);
      printarray (arr,5);

      return 0;

  }