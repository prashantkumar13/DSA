// two sum

#include <iostream>
using namespace std;



void TwoSum(int arr[] , int size , int target){
    
    int index = 0;
    int j = 1;
  

     if(j == index){
          index++;
        }

    while(index < size){

        // if(j == index){
        // index++;
        // }
        if (arr[index] + arr[j] == target) {
            if(size % 2 == 0){
                cout << index << "," << j << endl;
              }
              else{
                cout << j << "," << index << endl;
              }
            j++;
        }
         index++; 
           
    }  
}
int main(){

    // int arr[] = {3,2,4};
    // int size = 3;
    // int target = 6;

    int arr[] = {2,7,11,15};
    int size = 4;
    int target = 9;

    TwoSum(arr , size , target);
   

}