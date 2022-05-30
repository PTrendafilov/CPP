#include <iostream>
#include <iomanip>
using namespace std;

void enter(int arr[][10],int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        cout<<"please enter row with index "<<i+1<<" = ";
        for (int j = 0; j < cols; j++) {
            cin>>arr[i][j];
        }
    }
}
int sum(int arr[][10],int rows, int cols){
    int s=0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            s+=arr[i][j];
        }
    }
    return s;
}
void write_array(int arr[][10],int rows, int cols){
    for (int i = 0; i < rows; i++) {
        cout<<endl;
        for (int j = 0; j < cols; j++) {
            cout<<setw(5)<<arr[i][j];
        }
    }
}
int max_el(int arr[][10],int rows, int cols){
    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}
int min_el(int arr[][10],int rows, int cols){
    int min = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;
}
bool search(int arr[][10],int rows, int cols){
    int number;
    cin>>number;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if(arr[i][j]==number){
                return true;
            }
        }
    }
    return false;
}
int main() {
    int N,M;
    cin>>N>>M;
    int arr[10][10];
    enter(arr,N, M);
    cout<<"The sum of elements = "<<sum(arr,N,M);
    write_array(arr,N,M);
    cout<<"\nMax element of the array = "<<max_el(arr,N,M);
    cout<<"\nMin element of the array = "<<min_el(arr,N,M);
    cout<<endl;
    if(search(arr, N, M)){
        cout<<"In the array there is the searched number.";
    }else{
        cout<<"In the array there is not the searched number.";
    }
    return 0;
}
