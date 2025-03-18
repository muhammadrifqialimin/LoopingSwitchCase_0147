#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    // Perulangan dengan for
    cout << "Perulangan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << " Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

    cout << "Perulangan for pencacah turun" << endl;
    // Perulangan dengan for
    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n = " << n << " Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n;
    cout << endl;

    cout << "Perulangan while" << endl;