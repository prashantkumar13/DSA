// find unique element

#include <iostream>
using namespace std;

void UniqueElement(int arr[] , int size){

     int ans = 0;
     for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
     }
    cout << ans;

}
int main(){

    int arr[] = {2,10,11,10,2,13,15,13,15};
    int size = 9;
    UniqueElement(arr , size);
}