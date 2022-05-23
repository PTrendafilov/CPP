#include<iostream>
#include<cmath>
#include <string.h>
using namespace std;
void  value(double  a[],  int  n,  double x){
    double out = 0;
    string s="";
    for(int i=n-1;i>=0;i--){
        //cout<<pow(a[i-1]*x, i)<<endl<<endl;
        cout<<"a["<<i<<"] = "<<a[i];
        cout<<endl<<"x = "<<x;
        s+= "(" + to_string(a[i]) + " * " + to_string(x) + ") ^ " + to_string(i);
        cout<<"\ni = "<<i<<endl;
        out+=pow(a[i]*x, i);
        if(i>0){
            s+=" + ";
        }
        //cout<<pow(a[i],1)<<" ";
    }
    cout<<"output = "<<out<<endl;
    cout<<"polinom = "<<s;
}
int main(){
int N;
cout<<"N = ";
cin>>N;
double a[N],x;
for(int i=0;i<N;i++){
    cout<<"input a["<<i<<"] = ";
    cin>>a[i];
}
cout<<"input x = ";
cin>>x;
value(a,N,x);
return 0;
}
