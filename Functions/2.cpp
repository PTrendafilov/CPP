#include <iostream>
using namespace std;
int main()
{
    //First polinom
    int power_first_polinom;
    cout<<"Stepen purvi polinom = ";
    cin>>power_first_polinom;
    double factor_first_polinom[power_first_polinom+1];
    for(int i=power_first_polinom; i>=0; i--){
        cout<<"Koeficient pred x na "<<i<<" stepen = ";
        cin>>factor_first_polinom[i-1];
    }
    //Second polinom
    int power_second_polinom;
    cout<<"Stepen vtori polinom = ";
    cin>>power_second_polinom;
    double factor_second_polinom[power_second_polinom+1];
    for(int i=power_second_polinom; i>=0; i--){
        cout<<"Koeficient pred x na "<<i<<"-ta stepen = ";
        cin>>factor_second_polinom[i-1];
    }

    return 0;
}

