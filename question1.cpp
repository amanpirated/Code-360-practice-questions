
#include<iostream>
#include<vector>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> arr) {
	int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i : arr){
        if(largest < i){
            largest = i;

        }
        if(smallest>i){
            smallest=i;
        }
    }
    int secondLargest=INT_MIN;
    int secondSmallest=INT_MAX;
    for(int i: arr){
        if(i<largest && secondLargest<i){
            secondLargest=i;
        }
        if(i>smallest && secondSmallest>i){
            secondSmallest=i;
        }
    }
    
    vector<int> arr2;
    arr2.push_back(secondLargest);
    arr2.push_back(secondSmallest);
    return arr2;
}