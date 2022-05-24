#include <iostream>
using namespace std;
void sum_pol(double a[], int n, double b[], int m) {
    int power = max(n,m);
    cout <<"The power of two polinoms is " << power<<endl;
    for (int i = 0; i < n + 1; i++) {
        cout << "x ^ " << i << " * " << a[i];
        if (i != n) {
            cout << " + ";
        }
    }
    cout << "\n\n++++++++++\n\n";    
    for (int i = 0; i < m + 1; i++) {
        cout << "x ^ " << i << " * " << b[i];
        if (i != m) {
            cout << " + ";
        }
    }
    cout<<"\n\n==========\n\n";

    for (int i = 0; i < min(n, m)+1; i++) {
        if (n != min(n, m)) {
            a[i] += b[i];
            //cout << "Hello!";
        }
        else {
            b[i] += a[i];
        }
    }

    if (n == max(n, m)) {
        for (int i = 0; i < n+1; i++) {
            cout << "x ^ " << i << " * " << a[i];
            if (i != n) {
                cout << " + ";
            }
        }
    }
    else {
        for (int i = 0; i < m + 1; i++) {
            cout << "x ^ " << i << " * " << b[i];
            if (i != m) {
                cout << " + ";
            }
        }
    }
}
int main()
{
    //First polinom
    int power_first_polinom;
    cout << "Stepen purvi polinom = ";
    cin >> power_first_polinom;
    double factor_first_polinom[10];
    for (int i = power_first_polinom; i >= 0; i--) {
        cout << "Koeficient pred x na " << i << " stepen = ";
        cin >> factor_first_polinom[i];
    }
    //Second polinom
    int power_second_polinom;
    cout << "Stepen vtori polinom = ";
    cin >> power_second_polinom;
    double factor_second_polinom[10];
    for (int i = power_second_polinom; i >= 0; i--) {
        cout << "Koeficient pred x na " << i << " stepen = ";
        cin >> factor_second_polinom[i];
    }
    sum_pol(factor_first_polinom, power_first_polinom, factor_second_polinom, power_second_polinom);
    return 0;
}