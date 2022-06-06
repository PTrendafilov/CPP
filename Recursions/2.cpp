#include<iostream>
#include<cmath>
using namespace std;
void progression(int a, int d, int n){
    n-=1;
    a+=d;
    if(n==0){
        cout<< a;
    }else{
        progression(a, d, n);
    }
}
int main(){
    int a0, d, n;
    cin>>a0>>d>>n;
    progression(a0, d, n);
}

