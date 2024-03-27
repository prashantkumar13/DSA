// Count 0's and 1's in an array

#include <iostream>
using namespace std;

void CountZerosOne(int arr[], int size){

    int zeroscount = 0;
    int onecount = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            zeroscount =  zeroscount + 1;
        }
        if(arr[i]==1){
            onecount++;
        }
    }
    
    cout << "zeroscount is:- "<< zeroscount <<endl;
    cout << "onescount is:- "<< onecount <<endl;
}


int main(){
    

    int arr[] = {0,1,0,0,1,0};
    int size = 6;
    CountZerosOne(arr , size);
   
     
}