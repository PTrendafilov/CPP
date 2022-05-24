#include <iostream>

using namespace std;
char type_of_row(int arr[], int K){
    bool flag=true;
    for(int i=0;i<K;i++){
        if(flag==false){
            break;
        }
        for(int j=i;j<K;j++){
            if(arr[i]>=arr[j]){
            }else{
                //cout<<arr[i];
                flag=false;
                break;
            }
        }
    }
    if(flag==true){
        return 'd';
    }
    flag = true;
    for(int i=0;i<K;i++){
        if(flag==false){
            break;
        }
        for(int j=i;j<K;j++){
            if(arr[i]<=arr[j]){}
            else{
                //cout<<arr[i]<<">"<<a
                flag=false;
                break;
            }
        }
        
    }
    if(flag==true){
        return 'i';
    }
    return 'u';
}
int main()
{
    int K;
    cin>>K;
    int arr[K];
    for(int i=0;i<K;i++){
        cin>>arr[i];
    }
    if(type_of_row(arr,K)=='i'){
        cout<<"The numbers are increasing";
    }else if(type_of_row(arr,K)=='d'){
        cout<<"The numbers are decreasing";
    }else cout<<"The numbers are unordered";
    return 0;
}
