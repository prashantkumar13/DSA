// rotate Array

#include <iostream>
using namespace std;

void rotateArray(int arr[] , int size , int k){
    
    int ans[size];

    for(int index=0; index<size; index++){
        int newIndex = (index + k) % size;
        ans[newIndex] = arr[index];
    }

    cout << "Printing the array" << endl;
    for(int  index=0; index<size; index++){
        cout << ans[index]<< " ";
    }
}


int main(){

    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int k = 2;

    rotateArray(arr , size , k);
}