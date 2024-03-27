#include <iostream>
using namespace std;

int main(){
   
   int n = 6;
   int arr[n];
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }

   cout<<"printing the array"<<endl;
   for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
   }
}