#include<iostream>
#include<cmath>
using namespace std;
int power(int x, int n){
    if(n%5==0 and n!=0){
        cout << pow(x,n) <<" ";
    }
    if(n==0){
        return 0;
    }
    else{
        return power(x, n-1);
    }
}
int main(){
    int x,n;
    cin>>x>>n;
    power(x,n);
}
