// missing term

#include <iostream>
using namespace std;


void MissingNumber(int arr[] , int size){
    
    
    for(int i=1; i<=size+1; i++){
         bool flag = 0;
        for(int j=0; j<size; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
           cout << "not found " << i << endl;
        }
        else{
        cout << "found" <<endl;
      }
    }

}


int main(){

    int arr[] = {1,7,3,2,5,6,8};

    int n = 7;

    MissingNumber(arr , n);
}