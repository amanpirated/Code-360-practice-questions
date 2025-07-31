#include<iostream>
#include<cmath>
using namespace std;
int Nthroot(int m,int n){
    double root=pow(m,1.0/n);
    int intRoot=round(root);
    int check=1;
    for(int i=0;i<n;i++){
        check*=intRoot
    }
    if(check==m){
        return intRoot;
    }
    else{
        return -1;
    }
}
int main(){
    int m=27,n=3;
    Nthroot(m,n);
    return 0;
}