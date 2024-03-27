// 3Sum

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();  
        vector<vector<int>> ans;

        vector<int> temp;

        for(int i=0; i<n; i++){
           for(int j=i+1; j<n; j++){
              for(int k=j+1; k<n; k++){
                 if(nums[i] + nums[j] + nums[k] == 0){
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                   
                    ans.push_back(temp);
                 }
              }
           }
        }
    return ans;
}
int main(){
 

 vector<int> nums = {-1,0,1,2,-1,-4};
 

}