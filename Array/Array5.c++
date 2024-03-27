//REverse an array

#include <iostream>
using namespace std;


void swapNum(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;   
}
void ReverseArray(int arr[], int size){

    int start = 0;
    int end = size-1;
    while (start <= end){
        swapNum(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "reverse array is :-"<<endl;
    for (int i = 0; i < size; i++){
        cout << arr[i];
    }
    
}

int main(){
    

    int arr[] = {1,2,3,4,5,6};
    int size = 6;

    ReverseArray(arr , size);

  
}