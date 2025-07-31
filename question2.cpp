#include<iostream>
#include<vector>
using namespace std;
int suMaxMin(int arr[],int n){
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i =0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];

        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    int sum=max+min;
    return sum;
}