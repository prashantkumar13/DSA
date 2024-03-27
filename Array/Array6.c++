// Extreme print in an array
#include <iostream>
using namespace std;

void ExtremePrint(int arr[], int size){

    int start = 0;
    int end = size-1;
    while (start <= end){
        if(start == end){
            cout << arr[start];
        }
        else{
        cout<< arr[start];
        cout<< arr[end];
        }
        start++;
        end--;
    }
    
}

int main(){
    

    int arr[] = {1,2,3,4,5,6};
    int size = 6;

    ExtremePrint(arr , size);

  
}