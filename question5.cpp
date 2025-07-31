#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>&nums,int target){
    for(size_t i=0; i<nums.size(); i++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {1,2,3,4,5,6};
    int target=5;
    search(nums,target);
    return 0;
}
