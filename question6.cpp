#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int>arr,int m){
    int end=arr.size()-1;
    int start=m+1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int num:arr){
        cout<<num<<" ";
    }
}int main(){
    vector<int>arr={1,2,3,4,5,6};
    int m=2;
    reverseArray(arr,m);
    return 0;
}