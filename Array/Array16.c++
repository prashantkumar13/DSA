// find pivot index

#include <iostream>
#include <vector>

using namespace std;

int bruteforce(int arr[], int size){

    for(int i=0; i<size; i++){

        int leftsum = 0;
        int rightsum = 0;
        
        for(int j=0; j<i; j++){
            leftsum += arr[j];
        }

        for(int j=i+1; j<size; j++){
            rightsum += arr[j];
        }

        if(leftsum == rightsum){
            return i;
        }
    }
    return -1;
}

// int pivotIndex(vector<int>& nums) {
        
//         int n = nums.size();

//         //initilization of LeftSum
//         vector<int> LeftSum(n , 0); 
//         //initilization of RightSum
//         vector<int> RightSum(n , 0);

//         for(int i=1; i<n; i++){
//             LeftSum[i] = LeftSum[i-1] + nums[i-1];
//         }

//         for(int i=n-2; i>=0; i--){
//             RightSum[i] = RightSum[i+1] + nums[i+1];
//         }

//         // for checking
//         for(int i=0; i<n; i++){
//             if( LeftSum[i] == RightSum[i]){
//                 return i;
//             }
//         }
//         return -1;   
//     }

int main(){

    // std::vector<int>nums = {1,7,3,6,5,6};
    // int ans = pivotIndex(nums);
    // cout << ans;

    int arr[] = {1,7,3,6,5,6};
    int size = 6;
    int ans = bruteforce(arr , size);
    cout << ans;
}