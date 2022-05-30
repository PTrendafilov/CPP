#include <iostream>
#include <iomanip>
using namespace std;
void enter(int arr[][10], int N){
    for(int i=0;i<N;i++){
        cout<<"please enter row with index "<<i+1<<" = ";
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
}
void write_array(int arr[][10],int N){
    for (int i = 0; i < N; i++) {
        cout<<endl;
        for (int j = 0; j < N; j++) {
            cout<<setw(5)<<arr[i][j];
        }
    }
}
bool check(int arr[][10],int N){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(arr[i][j]!=arr[j][i]){
                return false;
            }
        }
    }
    return true;
}
int primary(int arr[][10],int N){
    int p=0;
    for (int i = 0; i < N; i++) {
        p+=arr[i][i];
    }
    return p;
}
int secondary(int arr[][10],int N){
    int s=0;
    for (int i = 0; i < N; i++) {
        s+=arr[N-i-1][i];
    }
    return s;
}
int even(int arr[][10],int N){
    int count_even=0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(arr[i][j]%2==0){
                count_even+=1;
            }
        }
    }
    return count_even;
}
int main(){
    int N;
    cin>>N;
    int arr[10][10];
    enter(arr, N);
    write_array(arr,N);
    cout<<endl;
    if(check(arr,N)){
        cout<<"The matrix is simetrical ";
    }
    else{
        cout<<"The matrix isn't simetrical ";
    }
    cout<<endl;
    cout<<"Sum of primary diagonal = "<<primary(arr,N);
    cout<<endl;
    cout<<"Sum of secondary diagonal = "<<secondary(arr,N);
    cout<<endl;
    cout<<"Total even numbers in the array = "<<even(arr,N);
}
