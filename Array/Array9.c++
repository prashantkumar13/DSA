// pair sum 

#include <iostream>
using namespace std;


void printPairs(int arr[], int size){
    
    int ans = 0;
    for(int i=0; i<size; i++){
       
        for(int j=0; j<size; j++){
            ans = arr[i] + arr[j];
            cout << ans <<endl;
        }
        
    }
}


int main(){

    int arr[] = {10,20,30};
    int size = 3;

    printPairs(arr , size);

}