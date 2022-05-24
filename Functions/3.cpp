#include <iostream>

using namespace std;
char type_of_row(int arr[], int K) {
    bool flag = true;
    for (int i = 0; i < K; i++) {
        if (flag == false) {
            break;
        }
        for (int j = i; j < K; j++) {
            if (arr[i] >= arr[j]) {
            }
            else {
                //cout<<arr[i];
                flag = false;
                break;
            }
        }
    }
    if (flag == true) {
        return 'd';
    }
    flag = true;
    for (int i = 0; i < K; i++) {
        if (flag == false) {
            break;
        }
        for (int j = i; j < K; j++) {
            if (arr[i] <= arr[j]) {}
            else {
                //cout<<arr[i]<<">"<<a
                flag = false;
                break;
            }
        }

    }
    if (flag == true) {
        return 'i';
    }
    return 'u';
}
int even_numbers(int arr[], int K) {
    int counter = 0;
    for (int i = 0; i < K; i++) {
        if(arr[i]%2==0){
            counter++;
        }
    }
    return counter;
}
void out_odd_pos(int arr[], int K) {
    cout << "\nElements with odd index: \n";
    for (int i = 1; i < K; i+=2) {
        cout << arr[i] << " ";
    }
}
void reversed_array(int arr[], int K) {
    cout << "\nReversed array: \n";
    for (int i = K-1; i > -1; i--) {
        cout << arr[i] << " ";
    }
}
bool isconsist(int arr[], int K, int m) {
    for (int i = K - 1; i > -1; i--) {
        if (m == arr[i]) {
            return 1;
        }
    }
    return false;
}
int biggest_diffirence(int arr[], int K) {
    int max = 0;
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < K; j++) {
            if (arr[i] - arr[j] > max) {
                max = arr[i] - arr[j];
            }
        }
    }
    return max;
}
int main()
{
    int K;
    cin >> K;
    int arr[30];
    for (int i = 0; i < K; i++) {
        cin >> arr[i];
    }
    if (type_of_row(arr, K) == 'i') {
        cout << "The numbers are increasing";
    }
    else if (type_of_row(arr, K) == 'd') {
        cout << "The numbers are decreasing";
    }
    else cout << "The numbers are unordered";
    cout << endl;
    int count_even = even_numbers(arr, K);
    cout << "Count of even numbers in the row = " << count_even;
    out_odd_pos(arr, K);
    reversed_array(arr, K);
    cout << "\nPlease enter a number to search if in the array there is the entered number = ";
    int m;
    cin >> m;
    if (isconsist(arr, K, m)) {
        cout << "The number " << m << " consists in the array";
    }
    else {
        cout << "The number " << m << " doesn't consist in the array";
    }
    cout << "\nThe biggest diffirence between elements in the array = " << biggest_diffirence(arr, K);
    return 0;
    
}
