// missing element from an array with duplicates.

#include <iostream>
#include <algorithm>
using namespace std;

void missingElement(int arr[]  , int size){
 
 for(int i=0; i<size; i++){
    int index = abs(arr[i]);
    if(arr[index - 1] > 0){
        arr[index - 1] *= -1;  // mark visited
    }
 }

 for(int i=0; i<size; i++){
    if(arr[i] > 0){          // all positive value is ans
        cout << i+1 << endl;
    }
 }

}

int main(){


    int arr[] = {1,3,3,3,4};
    int size = 5;
    missingElement(arr , size);
}