///Suma cyfr liczby ca³kowitej
/// Autor: Jakub Romanowski
/// Data: 07.01.2020
#include <iostream>

using namespace std;

int main ()
{
    long long number, r;
    long long sum = 0;
    cin >> number;
    while (number > 0)
    {
        r = number % 10;
        sum += r;
        number /= 10;
    }
    cout << sum;

    return 0;
}
