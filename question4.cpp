#include<iostream>
using namespace std;
void starTriangle(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n=4;
    starTriangle(n);
    return 0;
}
