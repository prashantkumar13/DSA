//minimum number is an array

#include <iostream>
using namespace std;

void MinimumNumber(int arr[], int size){

    int minAns = INT16_MAX;
   
    for(int i=0; i<size; i++){
       if(arr[i] < minAns){
         minAns = arr[i];
       }  
    }
    cout << minAns;
}


int main(){
    

    int arr[] = {2,4,1,6,8,5};
    int size = 6;
    MinimumNumber(arr , size);
   
     
}