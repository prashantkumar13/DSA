// sort 0's , 1's and 2's
// using 2 pointer approaches


#include <iostream>
using namespace std;


void sortNumbers(int arr[], int size){
    
    int start = 0;
    int end = size - 1;
    int index = 0; 

    while(index<=end){

        if(arr[index] == 0){
            swap(arr[index], arr[start]);
            start++;
            index++;
        }
        else if(arr[index] == 2){
            swap(arr[index], arr[end]);
            end--;
            // index++; no need for this 
        }
        else{
            index++;
        }
        
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