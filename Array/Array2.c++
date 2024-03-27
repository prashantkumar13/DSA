// Linear search in an array

#include <iostream>
using namespace std;

int main(){

    int n = 5;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }

    int target;
    cin >> target;

    bool flag = 0;
    
     for(int i=0; i<n; i++){
        if(arr[i] == target){
            flag = 1;
            break;
        }
     }
    if(flag == 1){
        cout << "Target is found" << endl;
    }
    else{
        cout<< "Target is not found" <<endl;
    }

}