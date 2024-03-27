// sort 0's , 1's and 2's


#include <iostream>
using namespace std;


void sortNumbers(int arr[], int size){
    
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;

    for(int i=0; i<size; i++){
        if(arr[i] == 0){
           zerocount++;
        }
         if(arr[i] == 1){
           onecount++;
        }
         if(arr[i] == 2){
           twocount++;
        }
    }
    
    int index = 0;
    while( zerocount--){
        arr[index] = 0;
        index++;
    }
     while( onecount--){
        arr[index] = 1;
        index++;
    }
     while( twocount--){
        arr[index] = 2;
        index++;
    }

    cout << "Printing the array" << endl;
    for(int  index=0; index<size; index++){
        cout << arr[index]<< " ";
    }
    
}


int main(){

    int arr[] = {2,1,0,0,1,2,0};
    int size = 7;

    sortNumbers(arr , size);

}