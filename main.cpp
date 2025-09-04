#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int hasil = 1;
    for (int i = a; i > 1; i--)
    {
        hasil = hasil * i;
    }

    cout << hasil;
}